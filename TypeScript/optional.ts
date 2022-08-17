
function Demo(no1:number,no2 ?:number)
{
    console.log("Inside Demo");
    console.log("value 1 "+no1);

    if(no2!=undefined)
    {
        console.log("value of 2 "+no2);

    }
}

Demo(10,11);
Demo(10);

