function main():void
{
    Display("Marvellous Infosystem ","logic building")


}

function Display(str:string,str2:string):void
{
    var st:string=""

    for(var i=0;i<str2.length;i++)
    {
         str=str+str2[i]
    }
    console.log(str)
}
main()