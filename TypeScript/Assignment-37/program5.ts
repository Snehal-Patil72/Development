function main():void
{

    Display(4,5)
}

function Display(row:number,col:number)
{
    var list:string=""
    var no:number=1

    for(var i=0;i<row;i++)
    {

        for(var j=0;j<col;j++)
        {
          list=list+no.toString();
          list=list+" "
         // no--;
        }
        console.log(list)
        list=""
        no++;
    }
}
main()