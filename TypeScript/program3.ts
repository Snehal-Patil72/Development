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
    res=this.PI*(this.Radius*this.Radius);

    return res;
}


}


class CircleX extends Circle
{
    Circumference():number
    {
          var ans:number=0;
          ans=2*this.PI*this.Radius;
          return ans;

    }
}

var obj1=new CircleX(10);
var res:number=0;
res=obj1.Area();
console.log(res);

var obj2=new CircleX(60);
res=obj2.Circumference();
console.log(res);
