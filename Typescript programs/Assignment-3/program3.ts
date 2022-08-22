function main():void
{
Display("A")
}

function Display(val:string)
{
    if(val==val.toLowerCase())
    {
   val=val.toUpperCase();
    console.log(val);
    }
    else
    {
        val=val.toLowerCase();
        console.log(val);
    }
}
main();