function main() {
    Display(4, 4);
}
function Display(row, col) {
    var list = "";
    var res = "A";
    var no = res.charAt(0).charCodeAt(0);
    for (var i = 0; i < row; i++) {
        for (var j = 0; j < col; j++) {
            // console.log(String.fromCharCode(no))
            list = list + String.fromCharCode(no);
            list = list + " ";
        }
        console.log(list);
        list = "";
        no++;
    }
}
main();
