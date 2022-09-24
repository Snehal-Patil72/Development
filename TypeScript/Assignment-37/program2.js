function main() {
    Display(4, 3);
}
function Display(row, col) {
    var list = "";
    for (var i = 0; i < row; i++) {
        var no = 1;
        for (var j = 0; j < col; j++) {
            list = list + no.toString();
            no++;
        }
        console.log(list);
        list = "";
    }
}
main();
