import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'demo'
})
export class DemoPipe implements PipeTransform {

  //<h1>{{"Marvellous Pune" | demo:"PPA":"Angular"}}</h1>
  transform(value: unknown, ...args: unknown[]): unknown {
    var str:String="";

    if(args[0]=="PPA")
    {
    str="Batch start from 9 july in "+value;
    }
    return str;
  
  }

}
 