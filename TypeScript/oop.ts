//oop

class Arithimatic
{

  No1:number;
  No2:number;


constructor(a:number,b:number)
{

    this.No1=a;
    this.No2=b;
}

Addition()
{
var Ans:number=0;
Ans=this.No1+this.No2;
return Ans;
}


Subtraction()
{
var Ans:number=0;
Ans=this.No1-this.No2;
return Ans;
}

}

var obj1=new Arithimatic(10,11);
var obj2=new Arithimatic(20,21);

var ret:number=0;

ret=obj1.Addition();
console.log("Addition "+ret);


ret=obj1.Subtraction();
console.log("Subtraction "+ret);

