function main() {
    Display(4, 4);
}
function Display(row, col) {
    var list = "";
    for (var i = 0; i < row; i++) {
        var res = "A";
        var no = res.charAt(0).charCodeAt(0);
        for (var j = 0; j < col; j++) {
            // console.log(String.fromCharCode(no))
            if (i % 2 == 0) {
                list = list + String.fromCharCode(no);
                list = list + " ";
                no++;
            }
            else {
                list = list + String.fromCharCode(no).toLowerCase();
                list = list + " ";
                no++;
            }
        }
        console.log(list);
        list = "";
    }
}
main();
