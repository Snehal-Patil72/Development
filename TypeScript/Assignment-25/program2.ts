function main():void
{
    Display("Marvellous",3)


}

function Display(str:string,n:number):void
{
    var st:string=""

    for(var i=0;i<n;i++)
    {
        st=st+str[i];
    }
    console.log(st)
}
main()