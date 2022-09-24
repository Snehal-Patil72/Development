function main():void
{
    Display();

}

function Display():void
{
var arr:any[]=[85,66,3,15,93,88];

for(var i=0;i<arr.length;i++)
{
    if(arr[i]%5==0 && arr[i]%3==0)
    {
        console.log(arr[i])
    }
}

}

main();