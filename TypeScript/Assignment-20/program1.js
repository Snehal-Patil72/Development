function main() {
    var str = "&";
    check(str);
}
function check(ch) {
    // ch=ch.toLowerCase();
    var no = ch.charAt(0).charCodeAt(0);
    console.log(no);
    if ((no >= 97 && no <= 122) || (no >= 65 && no <= 90)) {
        console.log("True");
    }
    else {
        console.log("False");
    }
}
main();
