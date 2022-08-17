function main():void
{
    var str:String="pune kothrud Marvellous Infosystem";

    var bret:boolean;

    bret=ChkString(str);

    if(bret==true)
    {
        console.log("String Contain Marvellous in it");
    }
    else
    {
        console.log("String does not contain Marvellous in it");
  
    }
}


function ChkString(name:String):boolean
{
    var flag:boolean=false;
    var Arr:String[]=name.split(" ");
     var value:String="Marvellous";
    for(var i:number=0;i<Arr.length;i++)
    {
        if(Arr[i]===value)
        {
            flag=true;
            break;
        }
    }
    
    return flag;
}

main();