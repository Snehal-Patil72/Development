function main() {
    var Arr = [23, 89, 6, 29, 56, 45, 77, 32];
    var res = 0;
    res = Maximum(Arr);
    console.log(res);
}
function Maximum(Brr) {
    var max = Brr[0];
    var SecMax = 0;
    for (var i = 0; i < Brr.length; i++) {
        if (Brr[i] > max) {
            SecMax = max;
            max = Brr[i];
        }
        else if (Brr[i] > SecMax) {
            SecMax = Brr[i];
        }
    }
    return SecMax;
}
main();
