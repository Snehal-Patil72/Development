function main():void
{

    Display(4,3)
}

function Display(row:number,col:number)
{
    var list:string=""
    for(var i=0;i<row;i++)
    {
        for(var j=0;j<col;j++)
        {
          list=list+"* "
        }
        console.log(list)
        list=""
    }
}
main()