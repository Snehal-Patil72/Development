function main():void
{
Display("aaMrMvellous","M")
}

function Display(str:string,ch:string):void
{
    var icnt:number=0;
for(var i=0;i<str.length;i++)
{
    if(str[i]==ch)
    {
icnt=i;
break;
    }
}
console.log(icnt)
}
main();