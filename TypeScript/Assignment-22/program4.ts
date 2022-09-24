function main():void
{
    Display("xyz")
}


function Display(str:string):void
{
for(var i=0;i<str.length;i++)
{
    var flag:boolean=false
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    {
        flag=true
        break
    }
   
}
console.log(flag)
}

main()