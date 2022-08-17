function Sequence():void
{
console.log("hello");
console.log("hello");
console.log("hello");
console.log("hello");
console.log("hello");

}

function Iteration_For():void
{
    var i:number=0;
    for(i=1;i<=5;i++)
    {
        console.log("hello");
    }
}


function Iteration_While():void
{
    var i:number=1;
    while(i<=5)
    {
        console.log("hello");
        i++;
    }
}


Iteration_For();
Iteration_While();