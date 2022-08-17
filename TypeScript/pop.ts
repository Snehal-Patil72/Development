//pop

function Addition(No1:number,No2:number)
{
var Ans:number=0;
Ans=No1+No2;
return Ans;
}


function Subtraction(No1:number,No2:number)
{
var Ans:number=0;
Ans=No1-No2;
return Ans;
}

var value1:number=10;
var value2:number=11;
var ret:number=0;


ret=Addition(value1,value2);
console.log("Addition "+ret);

ret=Subtraction(value1,value2);
console.log("Subtraction "+ret);
