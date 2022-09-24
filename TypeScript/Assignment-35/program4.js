function main() {
    Display("aCBdef");
}
function Display(str) {
    var flag = true;
    var res = "";
    for (var i = str.length - 1; i >= 0; i--) {
        if (str[i] == str[i].toLowerCase()) {
            res = res + str[i].toUpperCase();
        }
        else if (str[i].toUpperCase() == str[i]) {
            res = res + str[i].toLowerCase();
        }
    }
    console.log(res);
}
main();
