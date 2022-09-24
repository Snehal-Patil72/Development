function main() {
    Display("Marvellous");
}
function Display(str) {
    var st = "";
    for (var i = 0; i < str.length; i++) {
        st = st + str[i];
    }
    console.log(st);
}
main();
