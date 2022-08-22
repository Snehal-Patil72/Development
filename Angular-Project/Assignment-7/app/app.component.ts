import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'FunctionApp';

  str:String="";
  
  public fun()
  {
   this.str="Marvellous Infosystem";

   return this.str;
  }
}
