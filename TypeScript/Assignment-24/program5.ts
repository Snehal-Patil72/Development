function main():void
{
Display("abcd")
}

function Display(str:string):void
{
    var icnt:number=0;
var st:string=str.split("").reverse().join("")
console.log(st)
}
main();