function main():void
{
Display(4,4)

}
function Display(row:number,col:number)
{
var list:string=""
var res:string="A";
var no:number=res.charAt(0).charCodeAt(0);
for(var i=0;i<row;i++)
{
  
    for(var j=0;j<col;j++)
    {
        // console.log(String.fromCharCode(no))
       
        list=list+String.fromCharCode(no);
        list=list+" "
       

    }

    console.log(list);
    list="";
no++
}

}
main()