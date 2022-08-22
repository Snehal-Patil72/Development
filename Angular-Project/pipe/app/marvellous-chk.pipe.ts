import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'marvellousChk'
})
export class MarvellousChkPipe implements PipeTransform {

  transform(value: unknown, ...args: unknown[]): unknown {
   
   if(args[0]=="Even")
   {
     if(<number>value%2==0)
     {
      return "It is Even Number";
     }
     else
     {
      return "It is not Even Number"
     }
   }
  else if(args[0]=="Odd")
  {
    if(<number>value%2!=0)
    {
     return "It is Odd Number";
    }
    else
    {
     return "It is not Odd Number"
    }
  }
  else if(args[0]=="Prime")
  {
   for(var i=2;i<(<number>value);i++)
   {
    if((<number>value%i)==0)
    {
      return "It is not Prime Number";
    }
    
  }
return "It is Prime Number";

  }
  
  else if(args[0]=="Perfect")
{
var sum:number=0;
var val=<number>value;

for(var i=0;i<val;i++)
{
  if(val%i==0)
  {
    sum=sum+i;
  }
}

if(sum==val)
{
  return "It is Perfect Number";
}
else
{
  return "It is not Perfect Number"
}

}
return null;
  }
}
