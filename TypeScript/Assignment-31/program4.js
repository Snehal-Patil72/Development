function main() {
    Display("MarvellouS");
}
function Display(str) {
    var flag = false;
    for (var i = 0; i < str.length; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            flag = true;
            break;
        }
    }
    console.log(flag);
}
main();
