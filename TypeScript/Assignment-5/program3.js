function main() {
    Display(922432);
}
function Display(val) {
    var icnt = 0;
    var digit = 0;
    while (val != 0) {
        digit = val % 10;
        if (digit == 2) {
            icnt++;
        }
        val = Math.floor(val / 10);
    }
    console.log(icnt);
}
main();
