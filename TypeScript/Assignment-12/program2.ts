function main():void
{
Display(4,4);

}

function Display(row:number,col:number)
{
var list:string="";
    for(var i=row;i>=0;i--)
    {
        for(var j=0;j<col;j++)
        {
            if(j<=i)
            {
                list=list+"*";
            }
            else
            {

            list=list+"#"
        }


        }
        console.log(list);
        list="";
    }
}

main();