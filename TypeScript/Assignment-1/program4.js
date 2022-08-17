function main() {
    var res;
    res = Divide(5);
    if (res == true) {
        console.log("it is divisible");
    }
    else {
        console.log("it is not divisible");
    }
}
function Divide(no) {
    if (no % 5 == 0) {
        return true;
    }
    return false;
}
main();
