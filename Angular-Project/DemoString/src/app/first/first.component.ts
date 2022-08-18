import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-first',
  templateUrl: './first.component.html',
  styleUrls: ['./first.component.css']
})


export class FirstComponent 
 {

name:string="Snehal";

Display():string
{

var ret:string="Hello "+this.name;

return ret;

}

Addition(no1:number,no2:number):number
{
  return no1+no2;
}

}
