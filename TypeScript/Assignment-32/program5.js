function main() {
    var arr = [85, 66, 3, 80, 93, 88, 15];
    Count(arr);
}
function Count(brr) {
    var eicnt = 0;
    var oicnt = 0;
    for (var i = 0; i < brr.length; i++) {
        if (brr[i] % 11 == 0) {
            console.log(brr[i]);
        }
    }
}
main();
