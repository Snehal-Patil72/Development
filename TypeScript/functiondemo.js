function fun() {
    console.log("inside fun");
}
fun();
function gun(no) {
    console.log(no);
}
gun(11);
function sun(no) {
    var i = no;
    i++;
    return i;
}
var ret = 0;
var a = 10;
ret = sun(a);
console.log("return value " + ret);
