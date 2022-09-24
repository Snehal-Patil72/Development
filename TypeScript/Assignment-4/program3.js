function main() {
    Display(12);
}
function Display(val) {
    for (var i = 0; i < val; i++) {
        if (val % i != 0) {
            console.log(i);
        }
    }
}
main();
