import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root'
})
export class ArthematicServiceService 
{
   
  constructor() { }

  public GetAddition(value1:number,value2:number)
   {

    var ans:number=0;
    ans=value1+value2;

    return ans;
   }

   public GetSubtraction(value1:number,value2:number)
   {

    var ans:number=0;
    ans=value1-value2;

    return ans;
   }
}
