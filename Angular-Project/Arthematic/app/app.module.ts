import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppComponent } from './app.component';
import { DemoComponent } from './demo/demo.component';
import { ArthematicServiceService } from './arthematic-service.service';
@NgModule({
  declarations: [
    AppComponent,
    DemoComponent
  ],
  imports: [
    BrowserModule
  ],
  providers: [ArthematicServiceService],
  bootstrap: [AppComponent]
})
export class AppModule { }
