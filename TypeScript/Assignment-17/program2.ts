function main():void
{
var res:number=0;
var arr:any[]=[85,66,3,80,93,88,90]
res=Count(arr)
console.log(res)

}

function Count(brr:any[]):number
{
var Eicnt:number=0;
var Oicnt:number=0;
for(var i:number=0;i<brr.length;i++)
{
if(brr[i]%2==0)
{
    Eicnt++;
}
else
{
    Oicnt++;
}

}

return Eicnt-Oicnt
}


main();