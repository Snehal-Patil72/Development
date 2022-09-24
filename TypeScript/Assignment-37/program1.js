function main() {
    Display(4, 3);
}
function Display(row, col) {
    var list = "";
    for (var i = 0; i < row; i++) {
        for (var j = 0; j < col; j++) {
            list = list + "* ";
        }
        console.log(list);
        list = "";
    }
}
main();
