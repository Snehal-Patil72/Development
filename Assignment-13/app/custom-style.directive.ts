import { Directive, ElementRef } from '@angular/core';

@Directive({
  selector: '[appCustomStyle]'
})
export class CustomStyleDirective {

  constructor(private obj:ElementRef) 

{
  this.obj.nativeElement.style.background="yellow";
 // this.obj.nativeElement.
 this.obj.nativeElement.style.fontweight="bold";
} 
}
