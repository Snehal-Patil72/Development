function main() {
    var res = Count(5733);
    console.log(res);
}
function Count(val) {
    var sume = 0;
    var sumo = 0;
    while (val != 0) {
        var digit = 0;
        digit = val % 10;
        if (digit % 2 == 0) {
            sume = sume + digit;
        }
        else {
            sumo = sumo + digit;
        }
        val = Math.floor(val / 10);
    }
    return sume - sumo;
}
main();
