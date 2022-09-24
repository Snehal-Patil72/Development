function main() {
    var res = Count();
    console.log(res);
}
function Count() {
    var arr = [85, 66, 3, 80, 93, 88];
    var esum = 0;
    var osum = 0;
    for (var i = 0; i < arr.length; i++) {
        if (arr[i] % 2 == 0) {
            esum = esum + arr[i];
        }
        else {
            osum = osum + arr[i];
        }
    }
    return esum - osum;
}
main();
