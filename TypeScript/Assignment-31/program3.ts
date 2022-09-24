function main():void
{
    Display("MarvellouS")
}

function Display(str:string)
{
var sicnt:number=0;
var cicnt:number=0;
for(var i=0;i<str.length;i++)
{
    if(str[i]==str[i].toLowerCase())
    {
      //  console.log(str[i])
        sicnt++
    }
    else{
        cicnt++;
    }

}

console.log(sicnt-cicnt)

}
main();