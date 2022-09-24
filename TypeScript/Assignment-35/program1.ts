function main():void
{
Display("Marvellous","logic build",5)
}

function Display(str:string,str2:string,no:number)
{
    for(var i=0;i<no;i++)
    {
        str=str+str2[i];
    }

    console.log(str)
}


main()