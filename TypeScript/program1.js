var Arthematic = /** @class */ (function () {
    function Arthematic(no1, no2) {
        this.Number1 = no1;
        this.Number2 = no2;
    }
    Arthematic.prototype.Addition = function () {
        var res = 0;
        res = this.Number1 + this.Number2;
        return res;
    };
    Arthematic.prototype.Subtraction = function () {
        var res = 0;
        res = this.Number1 - this.Number2;
        return res;
    };
    Arthematic.prototype.Division = function () {
        var res = 0;
        res = this.Number1 / this.Number2;
        return res;
    };
    Arthematic.prototype.Multiply = function () {
        var res = 0;
        res = this.Number1 * this.Number2;
        return res;
    };
    return Arthematic;
}());
var obj1 = new Arthematic(10, 20);
var ret = 0;
ret = obj1.Addition();
console.log(ret);
ret = obj1.Subtraction();
console.log(ret);
ret = obj1.Division();
console.log(ret);
ret = obj1.Multiply();
console.log(ret);
