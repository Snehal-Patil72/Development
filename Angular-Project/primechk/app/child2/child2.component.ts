import { Component, OnInit } from '@angular/core';
import { StringService } from '../string.service';

@Component({
  selector: 'app-child2',
  templateUrl: './child2.component.html',
  styleUrls: ['./child2.component.css']
})
export class Child2Component implements OnInit {
  res:number=0;
  constructor(private _obj:StringService) { }

  ngOnInit(): void
   {
     this.res=this._obj.GetCapitalCount("ABcd");
  }

}
