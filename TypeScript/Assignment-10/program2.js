function main() {
    Display(4, 3);
}
function Display(row, col) {
    var no = 1;
    for (var i = 0; i < row; i++) {
        for (var j = 0; j < col; j++) {
            console.log(no);
            no++;
        }
        no = 1;
    }
}
main();
