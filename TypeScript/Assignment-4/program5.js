function main() {
    var res = Count(12);
    console.log(res);
}
function Count(val) {
    var diff = 0;
    var sum = 0;
    var nsum = 0;
    for (var i = 0; i < val; i++) {
        if (val % i == 0) {
            sum = sum + i;
        }
        else {
            nsum = nsum + i;
        }
    }
    return sum - nsum;
}
main();
