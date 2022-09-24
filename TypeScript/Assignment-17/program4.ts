function main():void
{
var res:number=0;
var arr:number[]=[85,11,3,15,11,111]
res=Count(arr);
console.log(res);
}

function Count(brr:any[]):number
{
    var icnt:number=0;

    for(var i:number=0;i<brr.length;i++)
    {
      if(brr[i]==11)
      {
icnt++;
      }
    }
return icnt;
}

main()