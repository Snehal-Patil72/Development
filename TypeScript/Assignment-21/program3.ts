function main():void
{
Display("&")
}

function Display(str:string):void
{

var no:number=0
no=str.charAt(0).charCodeAt(0);
if(no>=33 && no<=42)
{
    console.log("True")
}
else
{
    console.log("False")
}

}


main();