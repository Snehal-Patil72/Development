import { Component, OnInit } from '@angular/core';
import {NgbDateStruct} from '@ng-bootstrap/ng-bootstrap';

export class User {
  public name!: string;
  public email!: string;
  public password!: string;
  public hobbies!: string;
}

@Component({
  selector: 'app-personal-info',
  templateUrl: './personal-info.component.html',
  styleUrls: ['./personal-info.component.css']
})




export class PersonalInfoComponent implements OnInit {
  model: NgbDateStruct | undefined;

  model2 = new User();
  Hobbies: string[] = [
    'Acrobatics',
    'Acting',
    'Animation',
    'Astronomy',
    'Baking',
  ];

  constructor() {

  }

  ngOnInit(): void {
    throw new Error('Method not implemented.');
  }

  onSubmit(form: any) {
    console.log(form.value);

}
}
export class NgbdDatepickerPopup {
}

