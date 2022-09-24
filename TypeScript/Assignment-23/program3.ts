function main():void
{
Display("Marvellous Multi OS")
}

function Display(str:string)
{
var res:string="";
    for(var i=0;i<str.length;i++)
    {
        if(str[i]==str[i].toLowerCase())
        {
            res=res+str[i].toUpperCase();
        }
       else
       {
        res=res+str[i].toLowerCase()
       }
    }

    console.log(res)
}

main();