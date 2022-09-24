function main():void
{
  var arr:number[]=[15,66,3,70,10,88]  
Count(arr,66)
}

function Count(brr:number[],no:number)
{
    var flag:number=-1;
  var prod:number=1;
    for(var i=0;i<brr.length;i++)
    {
        if(brr[i]%2!=0)
        {
prod=prod*brr[i]            
        }
    }
    console.log(prod)
}

main()