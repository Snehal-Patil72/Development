function main():void
{
    Display("Marvellous Multi OS")


}

function Display(str:string):void
{
    var st:string=""

    for(var i=0;i<str.length;i++)
    {
        if(str[i]==str[i].toLowerCase())
        {
        st=st+str[i];
        }
    }
    console.log(st)
}
main()