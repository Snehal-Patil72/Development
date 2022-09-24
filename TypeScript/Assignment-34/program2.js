function main() {
    var arr = [85, 66, 3, 66, 93, 88];
    Count(arr, 66);
}
function Count(brr, no) {
    var flag = -1;
    for (var i = 0; i < brr.length; i++) {
        if (brr[i] == no) {
            flag = i;
            break;
        }
    }
    console.log(flag);
}
main();
