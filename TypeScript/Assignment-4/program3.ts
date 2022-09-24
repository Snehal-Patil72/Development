function main():void
{
    Display(12);
}

function Display(val:number)
{
    for(var i=0;i<val;i++)
    {
        if(val%i!=0)
        {
            console.log(i)
        }

    }
}

main();