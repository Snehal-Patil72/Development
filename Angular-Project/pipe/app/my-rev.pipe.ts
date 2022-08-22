import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'myRev'
})
export class MyRevPipe implements PipeTransform {

  transform(value: unknown, ...args: unknown[]): String {
   
  var temp:String="";
  
  temp=<String>value;

  temp=temp.split("").reverse().join("");

    return temp;
  }

}
