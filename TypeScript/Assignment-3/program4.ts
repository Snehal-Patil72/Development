function main():void
{
Chk("K")
Chk("a");
}
function Chk(val:string):void
{

    if(val=="a" || val=="e" || val=="i" || val=="o"|| val=="u")
    {
        console.log("vowel");
    }
    else
    {
        console.log("not vowel")
    }
}
main();