function main() {
    Display("Hello");
}
function Display(str) {
    var list = "";
    for (var i = str.length; i >= 0; i--) {
        for (var j = 0; j < str.length; j++) {
            if (j < i) {
                list = list + str[j];
                list = list + " ";
                // no--;
            }
            else {
                list = list + " ";
            }
        }
        console.log(list);
        list = "";
    }
}
main();
