function main():void
{
Display("Marvellous Python")
}

function Display(str:string)
{
var res:string="";

for(var i=0;i<str.length;i++)
{
    if(str[i].toUpperCase()==str[i])
    {
    res=res+str[i].toLowerCase()
    }
    else if(str[i].toLowerCase()==str[i])
    {
        res=res+str[i].toUpperCase()
    }
}
console.log(res)
}

main();