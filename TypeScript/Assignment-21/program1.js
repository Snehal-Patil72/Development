function main() {
    Display("%");
}
function Display(str) {
    var no = 0;
    no = str.charAt(0).charCodeAt(0);
    if ((no >= 65 && no <= 90) || (no >= 97 && no <= 122)) {
        if ((no >= 65 && no <= 90)) {
            console.log(str.toLowerCase());
        }
        else {
            console.log(str.toUpperCase());
        }
    }
    else {
        console.log(str);
    }
}
main();
