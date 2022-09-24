function main():void
{
var res:number=0;
var arr:number[]=[8225,665,3,76,953,858]
count(arr);
}

function count(brr:number[]):void
{
var icnt:number=0;
for(var i=0;i<brr.length;i++)
{
    var temp=brr[i];
    while(temp!=0)
    {
        icnt++;
       temp=Math.floor(temp/10);
       

    }
    if(icnt==3)
    {
        console.log(brr[i]);
    }
    icnt=0;
    
}

}
main();