function main():void
{
Display("Marvellous","y")
}

function Display(str:string,ch:string):void
{
for(var i=0;i<str.length;i++)
{
    if(str[i]==ch)
    {
        console.log("True")
        break;
    }
}
}
main();