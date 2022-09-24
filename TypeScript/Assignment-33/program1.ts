function main():void
{
Count(2395)
}

function Count(no:number)
{

    var icnt:number=0;

    while(no!=0)
    {
        var digit=no%10;
        if(digit%2==0)
        {
            icnt++;
        }
        no=no/10;
    }


    console.log(icnt)

}

main();