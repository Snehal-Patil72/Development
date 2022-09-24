function main() {
    var res = 0;
    var arr = [85, 66, 3, 66, 93, 88];
    res = Count(arr);
    console.log(res);
}
function Count(brr) {
    var icnt = 0;
    for (var i = 0; i < brr.length; i++) {
        if (brr[i] == 66) {
            icnt++;
        }
    }
    return icnt;
}
main();
