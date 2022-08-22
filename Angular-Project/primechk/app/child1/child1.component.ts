import { Component, OnInit } from '@angular/core';
import { NumberService } from '../number.service';

@Component({
  selector: 'app-child1',
  templateUrl: './child1.component.html',
  styleUrls: ['./child1.component.css']
})
export class Child1Component implements OnInit {
 primeresult:boolean=false;

  constructor(private _obj:NumberService) { }

  ngOnInit(): void
   {
     this.primeresult=this._obj.ChkPrime(5);

  }

}
