function main():void
{
Display("1abccBA1",)
}

function Display(str:string)
{
    var flag:boolean=true

  str=str.toLowerCase();
  var res:string=""

   for(var i=str.length-1;i>=0;i--)
   {
    res=res+str[i]
   }

   if(res==str)
   {
    console.log("true")
   }
   else
   {
    console.log("false")
   }
}


main()