function main() {
    Display("Marvellous", "y");
}
function Display(str, ch) {
    for (var i = 0; i < str.length; i++) {
        if (str[i] == ch) {
            console.log("True");
            break;
        }
    }
}
main();
