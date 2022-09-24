function main():void
{
  var arr:number[]=[85,66,3,66,93,88]  
Count(arr,66)
}

function Count(brr:number[],no:number)
{
    var flag:number=-1;

    for(var i=0;i<brr.length;i++)
    {
        if(brr[i]==no)
        {
            flag=i;
            
        }
    }
    console.log(flag)
}

main()