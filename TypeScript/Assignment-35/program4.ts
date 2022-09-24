function main():void
{
Display("aCBdef")
}

function Display(str:string):void
{
    var flag:boolean=true
    var res:string=""
    for(var i=str.length-1;i>=0;i--)
    {
   if(str[i]==str[i].toLowerCase())
   {
    res=res+str[i].toUpperCase();
   }
   else if(str[i].toUpperCase()==str[i])
   {
    res=res+str[i].toLowerCase()
   }
}
    console.log(res)
}


main()