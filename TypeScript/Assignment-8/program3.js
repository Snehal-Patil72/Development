function main() {
    var res = Display(10, 18);
    console.log(res);
}
function Display(val, val1) {
    var sum = 0;
    for (var i = val; i <= val1; i++) {
        sum = sum + i;
    }
    return sum;
}
main();
