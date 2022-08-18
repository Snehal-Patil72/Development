import { Component, OnInit } from '@angular/core';
import { BatchserviceService } from '../batchservice.service';

@Component({
  selector: 'app-batchdetails',
  template: `<h2>Inside Batch Details</h2>      
   <ul *ngFor="let values of Batches">
  <li>
     {{values.Name}} with duration {{values.Duration}} having Fees {{values.Fees}}
  </li>
  </ul>
  `   
  
})

export class BatchdetailsComponent implements OnInit {
  public Batches:any=[];

  constructor(private _obj:BatchserviceService)
   { }

  ngOnInit(): void 
  {
    this.Batches=this._obj.GetBatches().subscribe(data=>this.Batches=data);
  }

}
