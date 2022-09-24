function main() {
    Display("MarvellouS");
}
function Display(str) {
    var sicnt = 0;
    var cicnt = 0;
    for (var i = 0; i < str.length; i++) {
        if (str[i] == str[i].toLowerCase()) {
            //  console.log(str[i])
            sicnt++;
        }
        else {
            cicnt++;
        }
    }
    console.log(sicnt - cicnt);
}
main();
