function main():void
{
Display("q")
}


function Display(str:string):void
{
    var no:number=0;

    no=str.charAt(0).charCodeAt(0);

    if(no>=65 && no<=90)
    {
        for(var i:number=no;i<=90;i++)
        {
            var char=String.fromCharCode(i);
          console.log(char)
        }
    }
    else
    {
        for(var i=no;i>=97;i--)
        {
            var c=String.fromCharCode(i);
            console.log(c);
        }
    }

}
main();