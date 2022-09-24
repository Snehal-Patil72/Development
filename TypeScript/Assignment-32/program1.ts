function main():void
{

var arr:number[]=[85,66,3,80,93,88]
Count(arr)

}

function Count(brr:number[])
{
    var eicnt:number=0;
    var oicnt:number=0;

    for(var i=0;i<brr.length;i++)
    {
        if(brr[i]%2==0)
        {
            eicnt=eicnt+brr[i]
        }
        else
        {
            oicnt=oicnt+brr[i];
        }
    }

    console.log(eicnt-oicnt)
}

main();