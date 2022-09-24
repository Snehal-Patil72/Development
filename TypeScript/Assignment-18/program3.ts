function main():void
{

var arr:number[]=[85,66,3,76,93,88]
Display(arr,60,90);

}

function Display(brr:number[],val1:number,val2:number):void
{
for(var i:number=0;i<brr.length;i++)
{
    if(brr[i]>val1 && brr[i]<val2)
    {
        console.log(brr[i]);
    }
}

}

main();