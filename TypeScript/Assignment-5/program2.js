function main() {
    Display(118);
}
function Display(val) {
    var digit = 0;
    while (val != 0) {
        digit = val % 10;
        if (digit == 0) {
            console.log("contains Zero");
        }
        val = Math.floor(val / 10);
    }
}
main();
