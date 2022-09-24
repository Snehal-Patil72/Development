function main():void
{

    var res:number=0;
    var arr:number[]=[85,66,3,66,93,88]
    res=Count(arr);
    console.log(res)

}

function Count(brr:number[]):number
{
    var icnt:number=0;

    for(var i:number=0;i<brr.length;i++)
    {
        if(brr[i]==66)
        {
   icnt++;
        }
    }

    return icnt;
}

main();