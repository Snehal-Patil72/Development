function main():void
{

    var res:number=0;
    var arr:number[]=[15,66,3,70,10,88];
    res=Count(arr);
    console.log(res);
}

function Count(brr:number[]):number
{
    var ans:number=1;

    for(var i:number=0;i<brr.length;i++)
    {
        if(brr[i]%2!=0)
        {
            ans=ans*brr[i]
        }
    }

    return ans;
}
main()