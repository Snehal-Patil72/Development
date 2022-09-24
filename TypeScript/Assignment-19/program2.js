function main() {
    var arr = [85, 66, 3, 66, 93, 88];
    var res = largest(arr);
    console.log(res);
}
function largest(brr) {
    var max = brr[0];
    for (var i = 0; i < brr.length; i++) {
        if (max > brr[i]) {
            max = brr[i];
        }
    }
    return max;
}
main();
