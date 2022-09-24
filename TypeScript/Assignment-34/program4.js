function main() {
    var arr = [85, 66, 3, 66, 93, 88];
    Count(arr, 60, 90);
}
function Count(brr, s, no) {
    var flag = -1;
    for (var i = 0; i < brr.length; i++) {
        if (brr[i] > s && brr[i] < no) {
            console.log(brr[i]);
        }
        console.log(i);
    }
    //   console.log(flag)
}
main();
