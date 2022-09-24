function main():void
{
var str:string="c"
check(str);
}

function check(ch:string):void
{

   // ch=ch.toLowerCase();
    var no:number=ch.charAt(0).charCodeAt(0);
    console.log(no)
    if(no>=65 && no<=122)
    {
        console.log("True")
    }
    else
    {
        console.log("False")
    }
}
main();