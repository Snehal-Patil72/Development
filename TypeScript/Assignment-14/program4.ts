function main():void
{
Display(6,6)
}
;
function Display(row:number,col:number)
{
    var list:string="";

    for(var i=0;i<row;i++)
    {
        if(i>0 && i<row)
        {
            for(var j=0;j<col;j++)
            {
              
            if(j>0 && j<col)
            {
                if(i==j)
                {
                    list=list+"* "
                }
                else
                {
                    list=list+" "
                }
            }
           }
            console.log(list);
        }
        else
        {
            for(var j=0;j<col;j++)
            {
                list=list+"* "
            
            }
            console.log(list);

        }
        list=""
    }
}

main();