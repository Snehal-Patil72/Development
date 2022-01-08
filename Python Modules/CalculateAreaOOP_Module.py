class Circle:
	PI=3.14;

	def __init__(self):
		self.Radius=0
		self.Area=0;
		self.Circumference=0;

	def Accept(self):
		print("Enter Radius");
		self.Radius=int(input())
		
	def Display(self):
		print("Radius ",self.Radius);
		print("Area of Circle",self.Area);
		print("Circumference ",self.Circumference);

	def CalculateArea(self):
		self.Area=Circle.PI*self.Radius*self.Radius;		

	def CalculateCircumference(self):
		self.Circumference=2*Circle.PI*self.Radius;

def main():
	obj=Circle();
	obj.Accept();
	obj.CalculateArea();
	obj.CalculateCircumference();
	obj.Display();

	obj2=Circle();
	obj2.Accept();
	obj2.CalculateArea();
	obj2.CalculateCircumference();
	obj2.Display();

if __name__=="__main__":
	main();