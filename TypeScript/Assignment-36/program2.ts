function main():void
{
Display(4,4)

}
function Display(row:number,col:number)
{
var list:string=""
for(var i=0;i<row;i++)
{
    var res:string="A";
var no:number=res.charAt(0).charCodeAt(0);
    for(var j=0;j<col;j++)
    {
        // console.log(String.fromCharCode(no))
       if(i%2==0)
       {
        list=list+String.fromCharCode(no);
        list=list+" "
         no++;
       }
       else
       {
        list=list+String.fromCharCode(no).toLowerCase();
        list=list+" "
         no++;
       }

    }
    console.log(list);
    list="";
}

}
main()