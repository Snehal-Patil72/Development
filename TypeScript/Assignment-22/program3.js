function main() {
    Display("Marvellous");
}
function Display(str) {
    var st;
    st = str.split("").reverse().join("");
    console.log(st);
    var res = "";
    for (var i = str.length - 1; i >= 0; i--) {
        res = res + str[i];
    }
    console.log(res);
}
main();
