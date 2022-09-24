function main() {
    Display("Marvellous Python");
}
function Display(str) {
    var res = "";
    for (var i = 0; i < str.length; i++) {
        if (str[i].toUpperCase() == str[i]) {
            res = res + str[i].toLowerCase();
        }
        else {
            res = res + str[i];
        }
    }
    console.log(res);
}
main();
