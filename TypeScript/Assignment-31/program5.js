function main() {
    Display("MarvellouS");
}
function Display(str) {
    var res = "";
    var flag = false;
    for (var i = str.length - 1; i >= 0; i--) {
        res = res + str[i];
    }
    console.log(res);
}
main();
