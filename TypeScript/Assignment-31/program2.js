function main() {
    Display("MarvellousMultiOS");
}
function Display(str) {
    var icnt = 0;
    for (var i = 0; i < str.length; i++) {
        if (str[i] == str[i].toLowerCase()) {
            //  console.log(str[i])
            icnt++;
        }
    }
    console.log(icnt);
}
main();
