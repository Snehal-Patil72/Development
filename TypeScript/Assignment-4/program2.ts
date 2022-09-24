function main():void
{
    Display(10);
}

function Display(val:number)
{
    for(var i=val;i>=0;i--)
    {
        if(val%i==0)
        {
        console.log(i)
        }
    }
}
main();