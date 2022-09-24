function main() {
    Display("marve89llous121");
}
function Display(str) {
    var res = "";
    for (var i = 0; i < str.length; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            console.log(str[i]);
        }
    }
}
main();
