function main():void
{
Display("Marvellous","Marvellous",5)
}

function Display(str:string,str2:string,no:number)
{
    var flag:boolean=true

    for(var i=0;i<no;i++)
    {
    if(str[i]!=str2[i])
    {
        flag=false
    }
}
    console.log(flag)
}


main()