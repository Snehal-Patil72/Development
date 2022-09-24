function main():void
{

    var arr:any[]=[85,66,3,80,93,88];
   var res:number=0;
  res= Display(arr);
  console.log(res);

}

function Display(brr:any[]):number
{

    var icnt:number=0;

    for(var i:number=0;i<brr.length;i++)
    {
        if(brr[i]%2==0)
        {
            icnt++;
        }
    }

    return icnt;
}

main();