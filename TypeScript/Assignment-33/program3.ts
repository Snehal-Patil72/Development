function main():void
{
Count(2395)
}

function Count(no:number)
{

    var icnt:number=0;
   var prod:number=0;
    while(no!=0)
    {
        var digit=no%10;
      prod=prod*digit
        no=Math.floor(no/10);
    }


    console.log(icnt)

}

main();