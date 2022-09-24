function main() {
    Count("Marvellous");
}
function Count(str) {
    var icnt = 0;
    var no = 0;
    for (var i = 0; i < str.length; i++) {
        console.log(i);
        no = str.charAt(i).charCodeAt(i);
        console.log(no);
        console.log(String.fromCharCode(no));
        if (no >= 97 && no <= 122) {
            console.log(String.fromCharCode(no));
            icnt++;
        }
        no = 0;
    }
    console.log(icnt);
}
main();
