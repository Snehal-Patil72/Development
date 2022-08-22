function main() {
    var res = Count(922432);
    console.log(res);
}
function Count(val) {
    var mul = 1;
    while (val != 0) {
        var digit = val % 10;
        mul = mul * digit;
        // console.log(mul)
        val = Math.floor(val / 10);
    }
    return mul;
}
main();
