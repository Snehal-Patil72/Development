function main() {
    Display("Marvellous Multi OS");
}
function Display(str) {
    var st = "";
    for (var i = 0; i < str.length; i++) {
        if (str[i] == str[i].toLowerCase()) {
            st = st + str[i];
        }
    }
    console.log(st);
}
main();
