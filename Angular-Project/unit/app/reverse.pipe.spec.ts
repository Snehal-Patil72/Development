import { ReversePipe } from './reverse.pipe';

describe('ReversePipe', () => {
  it('create an instance', () => {
    const pipe = new ReversePipe();
    expect(pipe).toBeTruthy();
  });

  it('check the pipe',()=>
  {
    let obj=new ReversePipe();
    expect(obj.transform('abc')).toEqual('cba');
  });




});
