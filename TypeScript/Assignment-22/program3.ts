function main():void
{
Display("Marvellous")
}

function Display(str:string):void
{

var st:String;
st=str.split("").reverse().join("");
console.log(st)

var res:string="";

for(var i=str.length-1;i>=0;i--)
{
    res=res+str[i];
}
console.log(res)

}
main()