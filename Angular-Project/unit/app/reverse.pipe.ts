import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'reverse'
})
export class ReversePipe implements PipeTransform {

  transform(str:string)
  {
   return str.split("").reverse().join("");

   
  }
  }


//i/p=abc
//o/p=cba