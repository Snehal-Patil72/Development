function main() {
    var arr = [85, 66, 3, 80, 93, 88];
    var res = 0;
    res = Display(arr);
    console.log(res);
}
function Display(brr) {
    var icnt = 0;
    for (var i = 0; i < brr.length; i++) {
        if (brr[i] % 2 == 0) {
            icnt++;
        }
    }
    return icnt;
}
main();
