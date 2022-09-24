function main():void
{

var arr:number[]=[85,66,3,66,93,88]
var res=largest(arr);
console.log(res);
}


function largest(brr:number[]):number
{
var max:number=brr[0];
for(var i:number=0;i<brr.length;i++)
{
    if(max<brr[i])
    {
        max=brr[i];
    }
}
return max
}
main();