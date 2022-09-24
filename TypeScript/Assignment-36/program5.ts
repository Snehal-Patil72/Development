function main():void
{
Display(4,4)

}
function Display(row:number,col:number)
{
var list:string=""
var res:string="A";
//var no:number=res.charAt(0).charCodeAt(0);
var no:number=1
for(var i=0;i<row;i++)
{
  
    for(var j=0;j<col;j++)
    {
        // console.log(String.fromCharCode(no))
       
        list=list+no.toString();
        list=list+" "
       no++;

    }

    console.log(list);
    list="";

}

}
main()
