class Demo
{
static void Main(string []arg)
{
int value=0;

Console.WriteLine("Enter the no");
value=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

obj.Display(value);

}
}