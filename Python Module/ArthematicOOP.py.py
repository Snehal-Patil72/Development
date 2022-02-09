class Arthmetic:

	def __init__(self):
		self.value1=0;
		self.value2=0;

	def Accept(self):
		print("Enter first no");
		self.value1=int(input());

		print("Enter second no");
		self.value2=int(input());

	def Addition(self):
		sum=0;
		sum=self.value1+self.value2;
		return sum;

	def Multiplication(self):
		mul=0;
		mul=self.value1*self.value2;
		return mul;

	def Division(self):
		div=0;
		div=self.value1/self.value2;
		return div;

	def Subtraction(self):
		sub=0;
		sub=self.value1-self.value2;
		return sub;

def main():

	obj1=Arthmetic();
	obj1.Accept();
	ret=obj1.Addition();
	print("Add",ret);
	ret=obj1.Subtraction();
	print("sub",ret);
	ret=obj1.Division();
	print("Div",ret);
	ret=obj1.Multiplication();
	print("muk",ret);

   

if __name__=="__main__":
	main();