function main() {
    Display("Marvellous", 3);
}
function Display(str, n) {
    var st = "";
    for (var i = 0; i < n; i++) {
        st = st + str[i];
    }
    console.log(st);
}
main();
