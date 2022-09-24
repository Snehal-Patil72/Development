function main() {
    Display("1abcc9BA1");
}
function Display(str) {
    var flag = true;
    str = str.toLowerCase();
    var res = "";
    for (var i = str.length - 1; i >= 0; i--) {
        res = res + str[i];
    }
    if (res == str) {
        console.log("true");
    }
    else {
        console.log("false");
    }
}
main();
