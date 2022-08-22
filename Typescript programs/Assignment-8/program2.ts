function main():void
{
Display(20,50);
}


function Display(val:number,val1:number):void
{
    for(var i=val;i<val1;i++)
    {
        if(i%2==0)
        {
        console.log(i);
        }
    }
}
main();