function main() {
    Display(2395);
}
function Display(val) {
    var digit = 0;
    while (val != 0) {
        digit = val % 10;
        console.log(digit);
        val = Math.floor(val / 10);
    }
}
main();
