function main() {
    var res = Area(10);
    console.log(res);
}
function Area(val) {
    var v = 0;
    v = (val - 32) * (5 / 9);
    return v;
}
main();
