function main():void
{
Display("Marvellous Python")
}

function Display(str:string)
{
var res:string="";

for(var i=0;i<str.length;i++)
{
    if(str[i].toLowerCase()==str[i])
    {
    res=res+str[i].toUpperCase()
    }
    else
    {
        res=res+str[i]
    }
}
console.log(res)
}

main();