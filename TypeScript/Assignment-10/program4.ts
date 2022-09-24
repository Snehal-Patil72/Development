function main():void
{
Display(3,5);
}

function Display(row:number,col:number)
{
    var no=5;
    for(var i=0;i<row;i++)
    {
        for(var j=0;j<col;j++)
        {

            console.log("*");
        }
    }
}
main();