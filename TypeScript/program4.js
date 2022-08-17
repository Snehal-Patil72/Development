function main() {
    var no = 153;
    var bret;
    console.log(no);
    bret = ChkArmstrong(no);
    console.log(bret);
    if (bret == true) {
        console.log("It is ArmStrong Number");
    }
    else {
        console.log("It is not Armsrong number");
    }
}
var ChkArmstrong = function (value) {
    console.log(value);
    var res;
    var icnt = 0;
    var temp = 0;
    var value2 = value;
    temp = value;
    while (value != 0) {
        icnt++;
        value = Math.floor(value / 10);
    }
    var sum = 0;
    while (temp != 0) {
        var digit = temp % 10;
        var power = 1;
        for (var i = 1; i <= icnt; i++) {
            power = power * digit;
        }
        // console.log(power);
        sum = sum + power;
        power = 1;
        temp = Math.floor(temp / 10);
    }
    if (sum == value2) {
        return true;
    }
    else {
        return false;
    }
};
main();
