function main():void
{
    Display(5);
}

function Display(val:number):void
{

    for(var i=val;i>=0;i--)
    {
        console.log(i+" ");
        console.log("# ")
    }
}

main()