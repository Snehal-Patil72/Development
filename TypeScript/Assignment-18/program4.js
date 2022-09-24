function main() {
    var res = 0;
    var arr = [15, 66, 3, 70, 10, 88];
    res = Count(arr);
    console.log(res);
}
function Count(brr) {
    var ans = 1;
    for (var i = 0; i < brr.length; i++) {
        if (brr[i] % 2 != 0) {
            ans = ans * brr[i];
        }
    }
    return ans;
}
main();
