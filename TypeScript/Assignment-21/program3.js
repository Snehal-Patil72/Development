function main() {
    Display("&");
}
function Display(str) {
    var no = 0;
    no = str.charAt(0).charCodeAt(0);
    if (no >= 33 && no <= 42) {
        console.log("True");
    }
    else {
        console.log("False");
    }
}
main();
