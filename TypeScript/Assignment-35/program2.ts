function main():void
{
Display("Marvellous","Marvellous",5)
}

function Display(str:string,str2:string,no:number)
{
    var flag:boolean=false

    if(str==str2)
    {
        flag=true
    }

    console.log(flag)
}


main()