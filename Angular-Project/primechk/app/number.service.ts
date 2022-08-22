import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root'
})
export class NumberService {
  ans:boolean=true;

  constructor() 
  { }

  public ChkPrime(value:number)
  {
      var i:number=0;
     for( i=2;i<value;i++)
     {
          if(value%i==0)
          {
            this.ans=false;
            break;

          }
     }
     return this.ans;
  }
}
