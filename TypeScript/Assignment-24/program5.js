function main() {
    Display("abcd");
}
function Display(str) {
    var icnt = 0;
    var st = str.split("").reverse().join("");
    console.log(st);
}
main();
