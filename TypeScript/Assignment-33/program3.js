function main() {
    Count(2395);
}
function Count(no) {
    var icnt = 0;
    while (no != 0) {
        var digit = no % 10;
        if (digit > 3 && digit < 7) {
            icnt++;
        }
        no = Math.floor(no / 10);
    }
    console.log(icnt);
}
main();
