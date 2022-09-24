function main() {
    Display("Hello");
}
function Display(str) {
    var list = "";
    for (var i = 0; i < str.length; i++) {
        for (var j = 0; j < str.length; j++) {
            list = list + str[j];
            list = list + " ";
            // no--;
        }
        console.log(list);
        list = "";
    }
}
main();
