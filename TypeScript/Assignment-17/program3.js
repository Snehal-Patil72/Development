function main() {
    var res;
    var arr = [85, 66, 11, 80, 93, 88];
    res = Check(arr);
    if (res == true) {
        console.log("present");
    }
    else {
        console.log("not present");
    }
}
function Check(brr) {
    var flag = false;
    for (var i = 0; i < brr.length; i++) {
        if (brr[i] == 11) {
            flag = true;
            break;
        }
    }
    return flag;
}
main();
