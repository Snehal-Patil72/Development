function main():void
{

    Display(3,4)
}

function Display(row:number,col:number)
{
    var list:string=""
    for(var i=0;i<row;i++)
    {

        for(var j=0;j<col;j++)
        {
              if(j%2==0)
              {
                list=list+"* "
              }
              else
              {
                list=list+"# "
              }
        }
        console.log(list)
        list=""
        
    }
}
main()