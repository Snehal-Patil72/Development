function fun()
{
    console.log("inside fun");
}

fun();

function gun(no:number)
{
    console.log(no);
}

gun(11);


function sun(no:number):number
{
 var i:number=no; 
 i++;

 return i;
 
    
}

var ret:number=0;
var a:number=10;
ret=sun(a);
console.log("return value "+ret);