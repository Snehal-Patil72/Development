function main():void
{
var res:number=0;
var arr:number[]=[85,66,3,66,93,88]
res=Difference(arr);
console.log(res);
}

function Difference(brr:number[]):number
{

var diff:number=0;
var max:number=brr[0];
var min:number=brr[0]

for(var i=0;i<brr.length;i++)
{
    if(brr[i]<min)
    {
        min=brr[i]
    }
    else if(brr[i]>max)
    {
        max=brr[i]
    }
}
return max-min;
}

main();