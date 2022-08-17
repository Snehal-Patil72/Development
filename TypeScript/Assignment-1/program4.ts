function main():void
{
    var res:boolean;
    res=Divide(5);

    if(res==true)
    {
        console.log("it is divisible");
    }
    else
    {
        console.log("it is not divisible");
    }

}

function Divide(no:number):boolean
{
if(no%5==0)
{
    return true;
}

return false;

}

main();