function main() {
    Display("xyz");
}
function Display(str) {
    for (var i = 0; i < str.length; i++) {
        var flag = false;
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            flag = true;
            break;
        }
    }
    console.log(flag);
}
main();
