function main():void
{
    Display(4,4);
}
function Display(row:number,col:number):void
{

var list:string="";

for(var i=row;i>=0;i--)
{
    for(var j=col;j>=0;j--)
    {
        if(j<i)
        {
            list=list+"# "
        }
        else
        {
            list=list+"* "
        }
    }
    console.log(list)
    list="";
}

}

main();