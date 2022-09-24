function main():void
{
var res=Display(12);
console.log(res);
}

function Display(val:number):number
{
var sum=0;
for(var i=0;i<val;i++)
{
if(val%i!=0)
{
    sum=sum+i;
}

}
return sum;
}

main();