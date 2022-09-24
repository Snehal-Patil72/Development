function main():void
{
Display("MaMrvellous","M")
}

function Display(str:string,ch:string):void
{
    var icnt:number=0;
for(var i=0;i<str.length;i++)
{
    if(str[i]==ch)
    {
icnt++;
    }
}
console.log(icnt)
}
main();