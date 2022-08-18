import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';
import {HttpClientModule} from '@angular/common/http'


import { AppComponent } from './app.component';
import { BatchlistComponent } from './batchlist/batchlist.component';
import { BatchdetailsComponent } from './batchdetails/batchdetails.component';
import { BatchserviceService } from './batchservice.service';

@NgModule({
  declarations: [
    AppComponent,
    BatchlistComponent,
    BatchdetailsComponent
  ],
  imports: [
    BrowserModule,
   HttpClientModule
  ],
  providers: [BatchserviceService],
  bootstrap: [AppComponent]
})
export class AppModule { }
