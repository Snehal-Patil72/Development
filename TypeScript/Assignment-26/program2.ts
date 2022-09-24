function main():void
{
Display("Mar vello us Python")
}

function Display(str:string)
{
var res:string="";

for(var i=0;i<str.length;i++)
{
    if(str[i]!=' ')
    {
    res=res+str[i]
    }
}
console.log(res)
}

main();