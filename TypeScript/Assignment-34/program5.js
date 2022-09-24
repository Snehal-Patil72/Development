function main() {
    var arr = [15, 66, 3, 70, 10, 88];
    Count(arr, 66);
}
function Count(brr, no) {
    var flag = -1;
    var prod = 1;
    for (var i = 0; i < brr.length; i++) {
        if (brr[i] % 2 != 0) {
            prod = prod * brr[i];
        }
    }
    console.log(prod);
}
main();
