function main() {
    var res = 0;
    var arr = [85, 11, 3, 15, 11, 111];
    res = Count(arr);
    console.log(res);
}
function Count(brr) {
    var icnt = 0;
    for (var i = 0; i < brr.length; i++) {
        if (brr[i] == 11) {
            icnt++;
        }
    }
    return icnt;
}
main();
