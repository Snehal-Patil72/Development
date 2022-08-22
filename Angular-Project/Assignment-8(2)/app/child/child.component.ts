import { Component, OnInit, EventEmitter,Output } from '@angular/core';
import { NgModule } from '@angular/core';
@Component({
  selector: 'app-child',
  templateUrl: './child.component.html',
  styleUrls: ['./child.component.css']
})
export class ChildComponent implements OnInit {

  @Output() public name:any=new EventEmitter();

  public Message:String="";
  constructor() { }

  ngOnInit(): void {
  }


  public fun()
  {

    this.name.emit(this.Message);
  }
}
