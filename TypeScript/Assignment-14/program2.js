function main() {
    Display(4, 4);
}
function Display(row, col) {
    var list = "";
    for (var i = row - 1; i >= 0; i--) {
        for (var j = 0; j < col; j++) {
            if (j <= i) {
                list = list + "* ";
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
