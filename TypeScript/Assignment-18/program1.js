function main() {
    var arr = [85, 66, 3, 66, 93, 88];
    var res = 0;
    res = Check(arr);
    console.log(res);
}
function Check(brr) {
    var index = -1;
    for (var i = 0; i < brr.length; i++) {
        if (brr[i] == 66) {
            index = i;
            break;
        }
    }
    return index;
}
main();
