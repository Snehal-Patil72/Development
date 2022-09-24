function main() {
    Display("aaMrMvellous", "M");
}
function Display(str, ch) {
    var icnt = 0;
    for (var i = 0; i < str.length; i++) {
        if (str[i] == ch) {
            icnt = i;
            break;
        }
    }
    console.log(icnt);
}
main();
