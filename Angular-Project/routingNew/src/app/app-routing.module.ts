import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import { AboutusComponent } from './aboutus/aboutus.component';
import { BatchesComponent } from './batches/batches.component';
import { InvalidComponent } from './invalid/invalid.component';
import { SubjectsComponent } from './subjects/subjects.component';

const routes: Routes = [
{path:'batches',component:BatchesComponent},
{path:'subjects',component:SubjectsComponent},
{path:'about',component:AboutusComponent},
{path:'',component:AboutusComponent},
{path:'**',component:InvalidComponent},

];


@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
