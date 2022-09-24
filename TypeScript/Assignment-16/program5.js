function main() {
    Display();
}
function Display() {
    var arr = [85, 66, 3, 15, 93, 88];
    for (var i = 0; i < arr.length; i++) {
        if (arr[i] % 11 == 0) {
            console.log(arr[i]);
        }
    }
}
main();
