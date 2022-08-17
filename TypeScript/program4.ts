function main():void
{
    var no:number=153;

   var bret:boolean;
//    console.log(no);
   bret=ChkArmstrong(no);
   if(bret==true)
   {
       console.log("It is ArmStrong Number")
   }
   else
   {
       console.log("It is not Armsrong number")
   }

}


var ChkArmstrong=(value:number):boolean=>
{
    var res:boolean;
    var icnt:number=0;
    var temp:number=0;
    var value2:number=value;
    temp=value;
    while(value!=0)
    {
        icnt++;
        value=Math.floor(value/10);

    }
    var sum:number=0;

     while(temp!=0)
     {
       var digit:number=temp%10;
       var power:number=1;

      for(var i:number=1;i<=icnt;i++)
      {
        power=power*digit;
      }
     // console.log(power);
      sum=sum+power;
      power=1;
      temp=Math.floor(temp/10);
     }
     if(sum==value2)
     {
         return true;

     }
     else
     {
         return false;
     }
            

    
}


main();