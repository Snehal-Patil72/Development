class Circle
{

PI:number=3.14;
Radius:number;

constructor(no:number)
 {
    this.Radius=no;
}

Area():number
{
    var res:number;
    res=2*this.PI*this.Radius;
    return res;
}


}


var obj1=new Circle(10);
var res:number=0;
res=obj1.Area();
console.log(res);

var obj2=new Circle(60);
res=obj2.Area();
console.log(res);
