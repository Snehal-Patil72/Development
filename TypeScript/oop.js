//oop
var Arithimatic = /** @class */ (function () {
    function Arithimatic(a, b) {
        this.No1 = a;
        this.No2 = b;
    }
    Arithimatic.prototype.Addition = function () {
        var Ans = 0;
        Ans = this.No1 + this.No2;
        return Ans;
    };
    Arithimatic.prototype.Subtraction = function () {
        var Ans = 0;
        Ans = this.No1 - this.No2;
        return Ans;
    };
    return Arithimatic;
}());
var obj1 = new Arithimatic(10, 11);
var obj2 = new Arithimatic(20, 21);
var ret = 0;
ret = obj1.Addition();
console.log("Addition " + ret);
ret = obj1.Subtraction();
console.log("Subtraction " + ret);
