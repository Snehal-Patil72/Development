import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'SecondApp';

  str:String="Marvellous Infosystem";
  name:String="Marvellous InfoSystem"
  public fun()
  {
    this.str="Educating for better tommorow";
  }

  public nameUpper()
  {
 this.name=this.name.toUpperCase();
 console.log(this.name);
  }

  public namelower()
  {
 this.name=this.name.toLowerCase();
  }

  
  


}
