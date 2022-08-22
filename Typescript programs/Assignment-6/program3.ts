function main():void
{
    var res=Count(4521)
    console.log(res);
}

function Count(val:number):number
{
var icnt=0;

while(val!=0)
{
    var digit=val%10;
    if(digit>3 && digit<7)
    {
        icnt++;
    }
    val=Math.floor(val/10);
}
return icnt;
}

main();