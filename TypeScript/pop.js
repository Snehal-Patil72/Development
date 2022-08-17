//pop
function Addition(No1, No2) {
    var Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
function Subtraction(No1, No2) {
    var Ans = 0;
    Ans = No1 - No2;
    return Ans;
}
var value1 = 10;
var value2 = 11;
var ret = 0;
ret = Addition(value1, value2);
console.log("Addition " + ret);
ret = Subtraction(value1, value2);
console.log("Subtraction " + ret);
