class Demo:
	value=10;
	def __init__(self,a,b):
		self.no1=a;
		self.no2=b;

	def Fun(self):
		print(self.no1);
		print(self.no2);

	def Gun(self):
		print(self.no1);
		print(self.no2);

def main():
	print("enter first no");
	x=int(input());

	print("enter second no");
	y=int(input());

	obj1=Demo(11,21);
	obj2=Demo(51,101);
	obj1.Fun();
	obj1.Gun();	
	obj2.Fun();
	obj2.Gun();


if __name__=="__main__":
	main();
	