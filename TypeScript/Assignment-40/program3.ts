function main():void
{
Display(4,4)
}

function Display(row:number,col:number):void
{
var list:string="";
for(var i=0;i<row;i++)
{
for(var j=1;j<=col;j++)
{
    if(j==i)
    {
      list=list+j
    }
   

}
console.log(list);
list=""
}


}
main()