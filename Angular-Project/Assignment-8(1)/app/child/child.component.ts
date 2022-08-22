import { Component, EventEmitter, Input, OnInit, Output } from '@angular/core';

@Component({
  selector: 'app-child',
  templateUrl: './child.component.html',
  styleUrls: ['./child.component.css']
})
export class ChildComponent implements OnInit {

  @Input() public Message:any;
  @Output() public myEvent=new EventEmitter();

  public name:String="Hello from child";


  constructor() { }

  ngOnInit(): void {
  }

  public sendMessage()
  {
    this.myEvent.emit(this.name);
  }

}
