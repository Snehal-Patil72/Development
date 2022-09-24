function main() {
    Count(2395);
}
function Count(no) {
    var icnt = 0;
    var prod = 1;
    while (no != 0) {
        var digit = no % 10;
        prod = prod * digit;
        no = Math.floor(no / 10);
    }
    console.log(prod);
}
main();
