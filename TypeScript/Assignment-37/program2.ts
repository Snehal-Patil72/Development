function main():void
{

    Display(4,3)
}

function Display(row:number,col:number)
{
    var list:string=""
    for(var i=0;i<row;i++)
    {
        var no:number=1

        for(var j=0;j<col;j++)
        {
          list=list+no.toString();
          no++;
        }
        console.log(list)
        list=""
        
    }
}
main()