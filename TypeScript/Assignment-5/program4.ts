function main():void
{
Display(922432)

}


function Display(val:number):void
{
var digit=0;
var icnt=0;
while(val!=0)
{
    digit=val%10;
    if(digit==4)
    {
        icnt++;
    }
    val=Math.floor(val/10)
}
console.log(icnt);
}
main();