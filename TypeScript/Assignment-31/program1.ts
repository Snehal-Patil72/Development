function main():void
{
    Display("MarvellousMultiOS")
}

function Display(str:string)
{
var icnt=0;

for(var i=0;i<str.length;i++)
{
    if(str[i]==str[i].toUpperCase())
    {
        console.log(str[i])
        icnt++
    }

}

console.log(icnt)

}
main();