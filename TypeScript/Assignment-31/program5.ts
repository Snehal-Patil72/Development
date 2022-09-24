function main():void
{
    Display("MarvellouS")
}

function Display(str:string)
{
    var res:string=""

var flag:boolean=false;
for(var i=str.length-1;i>=0;i--)
{
    res=res+str[i]
}

console.log(res)

}
main();