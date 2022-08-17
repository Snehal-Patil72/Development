var Circle = /** @class */ (function () {
    function Circle(no) {
        this.PI = 3.14;
        this.Radius = no;
    }
    Circle.prototype.Area = function () {
        var res;
        res = 2 * this.PI * this.Radius;
        return res;
    };
    return Circle;
}());
var obj1 = new Circle(10);
var res = 0;
res = obj1.Area();
console.log(res);
var obj2 = new Circle(60);
res = obj2.Area();
console.log(res);
