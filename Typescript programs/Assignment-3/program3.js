function main() {
    Display("A");
}
function Display(val) {
    if (val == val.toLowerCase()) {
        val = val.toUpperCase();
        console.log(val);
    }
    else {
        val = val.toLowerCase();
        console.log(val);
    }
}
main();
