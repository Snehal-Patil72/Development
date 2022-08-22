import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { DemoCompComponent } from './demo-comp/demo-comp.component';
import { NewCompComponent } from './new-comp/new-comp.component';

@NgModule({
  declarations: [
    AppComponent,
    DemoCompComponent,
    NewCompComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
