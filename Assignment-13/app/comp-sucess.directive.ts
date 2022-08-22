import { Directive, ElementRef, HostListener } from '@angular/core';

@Directive({
  selector: '[appCompSucess]'
})
export class CompSucessDirective {

  constructor(private eobj:ElementRef) { }

  @HostListener('mouseenter')onmouseenter()
  {
     this.eobj.nativeElement.style.background="green";
  }

  @HostListener('mouseleave')onmouseleave()
  {
    this.eobj.nativeElement.style.background="black";

  }

}
