function main() {
    var no = 11;
    var bret;
    bret = CheckEven(no);
    if (bret == true) {
        console.log("it is even");
    }
    else {
        console.log("odd number");
    }
}
function CheckEven(value) {
    if (value % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}
main();
