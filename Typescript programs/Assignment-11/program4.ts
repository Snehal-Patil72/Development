function main():void
{

Display(4,4);

}

function Display(row:number,col:number)
{
   var name:string="A";
   var no:number;
   no=name.charCodeAt(0);
   var list: string[];
   var all:any;
    for(var i=row;i>=0;i--)
    {
        no=row;
       // no=name.charCodeAt(0)

         for(var j=0;j<col;j++)
         {
           
           // console.log(name.charAt(0));
            //console.log(String.fromCharCode(no));
            all=all+<string><unknown>no;
            
        all=all+" "

         }
         //no--;

        console.log(all);
        all="";
       //  name="A";
    }
}
main();