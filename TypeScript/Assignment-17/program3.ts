function main():void
{
var res:boolean;
var arr:any[]=[85,66,11,80,93,88]
res=Check(arr);
if(res==true)
{
    console.log("present");
}
else
{
    console.log("not present")
}

}

function Check(brr:any[]):boolean
{

    var flag:boolean=false;

    for(var i:number=0;i<brr.length;i++)
    {
        if(brr[i]==11)
        {
            flag=true;
            break;
        }
    }

    return flag;
}

main();