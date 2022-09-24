function main() {
    Display("Marvellous Python");
}
function Display(str) {
    var res = "";
    for (var i = str.length - 1; i >= 0; i--) {
        res = res + str[i];
    }
    console.log(res);
}
main();
