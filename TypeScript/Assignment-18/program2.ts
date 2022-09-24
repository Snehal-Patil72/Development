function main():void
{

var arr:number[]=[85,66,3,66,93,88]
var res:number=0;
res=Check(arr);
console.log(res)
}

function Check(brr:number[]):number
{
var index:number=-1;

for(var i:number=0;i<brr.length;i++)
{
    if(brr[i]==66)
    {
        index=i;
    }
}
return index
}

main();