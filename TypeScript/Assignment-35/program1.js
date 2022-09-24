function main() {
    Display("Marvellous", "logic build", 5);
}
function Display(str, str2, no) {
    for (var i = 0; i < no; i++) {
        str = str + str2[i];
    }
    console.log(str);
}
main();
