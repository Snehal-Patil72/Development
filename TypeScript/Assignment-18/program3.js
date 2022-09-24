function main() {
    var arr = [85, 66, 3, 76, 93, 88];
    Display(arr, 60, 90);
}
function Display(brr, val1, val2) {
    for (var i = 0; i < brr.length; i++) {
        if (brr[i] > val1 && brr[i] < val2) {
            console.log(brr[i]);
        }
    }
}
main();
