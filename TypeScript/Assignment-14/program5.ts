function main():void
{
    Display(4,4)


}
function Display(row:number,col:number):void
{
var list="";

for(var i=0;i<row;i++)
{
    for(var j=0;j<col;j++)
    {
        if(j>=i)
        {
            list=list+j;
        }
        else
        {
            list=list+" "
        }
    }
    console.log(list);
    list="";
}

}

main()