import { Component } from '@angular/core';
import { FormBuilder, Validators } from '@angular/forms';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {

  constructor(public fbobj : FormBuilder)
  {
  }

  MarvellousForm=this.fbobj.group(
{
  firstName:['',Validators.pattern("^[a-zA-Z ]*$")],
  lastName:['',[Validators.required,Validators.minLength(5)]],
  email:['',[Validators.required,Validators.pattern("[a-z0-9]+@[a-z]+\.[a-z]{2,3}")]],
  phone:['',[Validators.required,Validators.pattern("^[\+]?[(]?[0-9]{3}[)]?[-\s\.]?[0-9]{3}[-\s\.]?[0-9]{4,6}$")]],
  city:['',[Validators.minLength(4),Validators.required]],
  comment:['',[Validators.minLength(30)]]
}
  )

  
}
