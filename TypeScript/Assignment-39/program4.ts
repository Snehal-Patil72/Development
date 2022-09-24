function main():void
{
Display("Hello")
}

function Display(str:string)
{
var list:string="";

for(var i=str.length-1;i>=0;i--)
{
for(var j=0;j<str.length;j++)
{
    if(j<i)
    {
      list=list+str[j]
      list=list+" "
    }
    else
    {
        list=list+"* "
    }

}
console.log(list);
list=""
}

for(var i=0;i<str.length;i++)
{
for(var j=0;j<str.length;j++)
{
    if(j<i)
    {
      list=list+str[j]
      list=list+" "
    }
    else
    {
        list=list+"* "
    }

}
console.log(list);
list=""
}


}
main()