import {  OnInit } from '@angular/core';
import {Component} from '@angular/core';

@Component({
  selector: 'app-demo',
  templateUrl: './demo.component.html',
  styleUrls: ['./demo.component.css']
})
export class DemoComponent implements OnInit {

  constructor() { }

  ngOnInit(): void {
  }

  model = {
    left: true,
    middle: false,
    right: false
  }

}

