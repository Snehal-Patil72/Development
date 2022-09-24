function main():void
{
    Display("Marvellous")


}

function Display(str:string):void
{
    var st:string=""

    for(var i=0;i<str.length;i++)
    {
        st=st+str[i];
    }
    console.log(st)
}
main()