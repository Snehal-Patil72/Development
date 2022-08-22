function main() {
    Display(4, 4);
}
function Display(row, col) {
    var name = "A";
    for (var i = 0; i < row; i++) {
        for (var j = 0; j < col; j++) {
            console.log(name);
        }
        name = "B";
    }
}
main();
