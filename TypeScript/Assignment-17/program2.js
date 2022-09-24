function main() {
    var res = 0;
    var arr = [85, 66, 3, 80, 93, 88, 90];
    res = Count(arr);
    console.log(res);
}
function Count(brr) {
    var Eicnt = 0;
    var Oicnt = 0;
    for (var i = 0; i < brr.length; i++) {
        if (brr[i] % 2 == 0) {
            Eicnt++;
        }
        else {
            Oicnt++;
        }
    }
    return Eicnt - Oicnt;
}
main();
