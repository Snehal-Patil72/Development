function main() {
    Display("Marvellous Infosystem ", "logic building");
}
function Display(str, str2) {
    var st = "";
    for (var i = 0; i < str2.length; i++) {
        str = str + str2[i];
    }
    console.log(str);
}
main();
