function main():void
{

Display(4,4);

}

function Display(row:number,col:number)
{
   var name:string="A";
   var no:any;
   no=name.charCodeAt(0);
   var list: string[];
   var all:any;
    for(var i=0;i<row;i++)
    {
       // no=name.charCodeAt(0)

         for(var j=0;j<col;j++)
         {
           
           // console.log(name.charAt(0));
            //console.log(String.fromCharCode(no));
            all=all+String.fromCharCode(no)
            all=all+" "
            


         }
         no++;

        console.log(all);
        all="";
       //  name="A";
    }
}
main();