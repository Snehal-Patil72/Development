import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root'
})
export class StringService {
  CapitalNo:number=0;
  constructor() { }

  public GetCapitalCount(str:String)
  {
    const characterArray = str.split(""); 
    var charCount:number=0;
     var i:number=0;
     for(i=0;i<str.length;i++ )
     {
      if(characterArray[i]>='A' && characterArray[i]<='Z')
      {
          charCount++;
      }
     }
     return charCount;

  }
}
