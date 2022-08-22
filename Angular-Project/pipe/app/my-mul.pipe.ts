import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'myMul'
})
export class MyMulPipe implements PipeTransform {

  transform(value: unknown, ...args: unknown[]): unknown {
   
   
   var res:number;

   res=<number>value*<number>args[0];
    return res;
  }

}
