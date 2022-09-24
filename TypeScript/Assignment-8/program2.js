function main() {
    Display(20, 50);
}
function Display(val, val1) {
    for (var i = val; i < val1; i++) {
        if (i % 2 == 0) {
            console.log(i);
        }
    }
}
main();
