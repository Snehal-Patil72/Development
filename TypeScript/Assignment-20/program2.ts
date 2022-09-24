function main():void
{
var str:string="K"
check(str);
}

function check(ch:string):void
{

   // ch=ch.toLowerCase();
    var no:number=ch.charAt(0).charCodeAt(0);
    console.log(no)
    if(no>=65 && no<=90)
    {
        console.log("True")
    }
    else
    {
        console.log("False")
    }
}
main();