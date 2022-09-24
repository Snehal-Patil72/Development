function main():void
{
Display("marvell  us")
}

function Display(str:string)
{
    var icnt:number=0;
var res:string="";
    for(var i=0;i<str.length;i++)
    {
        if(str[i]==' ')
        {
icnt++
        }
    }
console.log(icnt)
}

main();