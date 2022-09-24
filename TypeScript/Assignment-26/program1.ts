function main():void
{
Display("Marvellous Python")
}

function Display(str:string)
{
var res:string="";

for(var i=str.length-1;i>=0;i--)
{
    res=res+str[i]
}
console.log(res)
}

main();