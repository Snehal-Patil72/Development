import { Component, OnInit } from '@angular/core';
import { ArthematicServiceService } from '../arthematic-service.service';

@Component({
  selector: 'app-demo',
  templateUrl: './demo.component.html',
  styleUrls: ['./demo.component.css']
})
export class DemoComponent implements OnInit {

  Addresult:number=0;
  Subresult:number=0;
  constructor(private _obj:ArthematicServiceService)
   { }

  ngOnInit(): void 
  {
     this.Addresult=this._obj.GetAddition(10,20);
     this.Subresult=this._obj.GetSubtraction(10,20)
  }

}
