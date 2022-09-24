"use strict";
exports.__esModule = true;
var fs_1 = require("fs");
function main() {
    openfile("demo.txt");
}
function openfile(str) {
    var file = (0, fs_1.readFileSync)('./demo.txt', 'utf-8');
    console.log(file);
}
main();
