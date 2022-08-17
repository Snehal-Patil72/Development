function main() {
    var str = "pune kothrud Marvellous Infosystem";
    var bret;
    bret = ChkString(str);
    if (bret == true) {
        console.log("String Contain Marvellous in it");
    }
    else {
        console.log("String does not contain Marvellous in it");
    }
}
function ChkString(name) {
    var flag = false;
    var Arr = name.split(" ");
    var value = "Marvellous";
    for (var i = 0; i < Arr.length; i++) {
        if (Arr[i] === value) {
            flag = true;
            break;
        }
    }
    return flag;
}
main();
