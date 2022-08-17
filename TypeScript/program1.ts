class Arthematic
{
    Number1:number;
    Number2:number;

    constructor(no1:number,no2:number)
    {
          this.Number1=no1;
          this.Number2=no2;
    }

    Addition():number
    {
        var res:number=0;
        res=this.Number1+this.Number2;
        return res;
    }

   Subtraction():number
   {
       var res:number=0;
       res=this.Number1-this.Number2;
       return res;
   }

   Division():number
   {
       var res:number=0;
       res=this.Number1/this.Number2;
       return res;
   }

   Multiply():number
   {
       var res:number=0;
       res=this.Number1*this.Number2;
       return res;
   }

}



var obj1=new Arthematic(10,20);
var ret:number=0;

ret=obj1.Addition();
console.log(ret);


ret=obj1.Subtraction();
console.log(ret);

ret=obj1.Division();
console.log(ret);


ret=obj1.Multiply();
console.log(ret);



