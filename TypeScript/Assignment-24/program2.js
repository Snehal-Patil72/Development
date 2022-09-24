function main() {
    Display("MaMrvellous", "M");
}
function Display(str, ch) {
    var icnt = 0;
    for (var i = 0; i < str.length; i++) {
        if (str[i] == ch) {
            icnt++;
        }
    }
    console.log(icnt);
}
main();
