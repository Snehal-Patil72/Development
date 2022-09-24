function main() {
    var res = calculate(12);
    console.log(res);
}
function calculate(val) {
    var sum = 1;
    for (var i = 0; i < val; i++) {
        if (val % i == 0) {
            sum = sum * i;
        }
    }
    return sum;
}
main();
