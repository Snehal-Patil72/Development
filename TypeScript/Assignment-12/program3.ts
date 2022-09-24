function main():void
{

Display(5,5)

}
function Display(row:number,col:number)
{
var list:string="";
for(var i=0;i<row;i++)
{
    for(var j=0;j<col;j++)
    {
         if(i==j)
         {
            list=list+"$ "
            
         }
         else
         {
            list=list+"* "
         }


    }
    console.log(list);
    list=""
}

}

main()