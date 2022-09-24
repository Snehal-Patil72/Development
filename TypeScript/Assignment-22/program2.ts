function main():void
{
Count("Marvellous")
}

function Count(str:string):void
{

    var icnt:number=0;
    var no:number=0;

    for(var i:number=0;i<str.length;i++)
    {
        console.log(i)
        no=str.charAt(i).charCodeAt(i)
        console.log(no)
        console.log(String.fromCharCode(no))
        if(no>=97 && no<=)
        {
            console.log(String.fromCharCode(no))
            icnt++;
        }
        no=0;
    }

    console.log(icnt)
}

main();