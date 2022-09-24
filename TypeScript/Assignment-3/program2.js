function main() {
    Display(24);
}
function Display(val) {
    for (var i = 0; i < val; i = i + 2) {
        // console.log(i);
        if (val % i == 0) {
            console.log(i);
        }
    }
}
main();
