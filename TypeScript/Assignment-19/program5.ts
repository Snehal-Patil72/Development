function main():void
{

    var arr:number[]=[8225,665,3,76,953,858];
    var res:number=0;
    count(arr);
}

function count(brr:number[]):void
{
    var sum:number=0;
    for(var i=0;i<brr.length;i++)
    {
        var temp=brr[i]
        while(temp!=0)
        {
            var digit=temp%10;
            sum=sum+digit;
            temp=Math.floor(temp/10);
        }
        console.log(sum);
        sum=0;

    }
}
main();