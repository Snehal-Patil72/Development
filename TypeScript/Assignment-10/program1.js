function main() {
    Display(4, 3);
}
function Display(row, col) {
    for (var i = 0; i < row; i++) {
        for (var j = 0; j < col; j++) {
            console.log("*");
        }
    }
}
main();
