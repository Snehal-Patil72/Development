//import { readFileSync } from 'fs';
import { readFileSync, writeFileSync, promises as fsPromises } from 'fs';
import { join } from 'path';

function main():void
{
    //openfile("hello.txt")
}

async function asyncWriteFile(filename: string, data: any) {
    /**
     * flags:
     *  - w = Open file for reading and writing. File is created if not exists
     *  - a+ = Open file for reading and appending. The file is created if not exists
     */
    try {
      await fsPromises.writeFile(join(__dirname, filename), data, {
        flag: 'w',
      });
  
      const contents = await fsPromises.readFile(
        join(__dirname, filename),
        'utf-8',
      );
      console.log(contents); // 👉️ "One Two Three Four"
     var icnt=0;

     for(var i=0;i<contents.length;i++)
     {
        if(contents[i]==contents[i].toUpperCase())
        {
            icnt++;
        }
     }
     console.log(icnt)
      var s=fsPromises.stat(filename);
      console.log((await s).size)

     // fsPromises.appendFile(filename,"world")
      return contents;
    }
     catch (err) {
      console.log(err);
      return 'Something went wrong';
    }
  }
  
  asyncWriteFile('./example.txt', 'Hello World');
  

main()

