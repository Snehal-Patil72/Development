import { readFileSync } from 'fs';

function main():void
{
    openfile("demo.txt")
}

function openfile(str:string):void
{
    const file = readFileSync('./demo.txt', 'utf-8');
console.log(file)
}
main()