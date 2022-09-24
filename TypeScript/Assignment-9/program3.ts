function main():void
{
    Display(5);
}

function Display(val:number):void
{

    for(var i=1;i<val;i++)
    {
        console.log(i+" ");
        console.log("* ")
    }
}

main()