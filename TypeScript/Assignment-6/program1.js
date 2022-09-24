function main() {
    var res = Count(8462);
    console.log(res);
}
function Count(val) {
    var icnt = 0;
    while (val != 0) {
        var digit = val % 10;
        if (digit % 2 == 0) {
            icnt++;
        }
        val = Math.floor(val / 10);
    }
    return icnt;
}
main();
