import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'myAdd'
})
export class MyAddPipe implements PipeTransform {

  transform(value: unknown, ...args: unknown[]): unknown {
   
   var temp:number;

   temp=<number>value+<number>args[0];

    return temp;
  }

}
