function main() {
    Display("marvell  us");
}
function Display(str) {
    var icnt = 0;
    var res = "";
    for (var i = 0; i < str.length; i++) {
        if (str[i] == ' ') {
            icnt++;
        }
    }
    console.log(icnt);
}
main();
