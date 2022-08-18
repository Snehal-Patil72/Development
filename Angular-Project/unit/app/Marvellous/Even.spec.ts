import { CheckEven } from "./Even";


describe('Check the even odd',()=>
{
 it('shuld return 1 if no is even',()=>
 {
    const ret=CheckEven(6);

    expect(ret).toBe(1);
 });

 it('should return 0 if number is odd',()=>
 {
   const ret=CheckEven(7);
   expect(ret).toBe(0);
 });

})
