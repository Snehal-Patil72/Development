function main() {
    Display("Marvellous", "Marvellous", 5);
}
function Display(str, str2, no) {
    var flag = true;
    for (var i = 0; i < no; i++) {
        if (str[i] != str2[i]) {
            flag = false;
        }
    }
    console.log(flag);
}
main();
