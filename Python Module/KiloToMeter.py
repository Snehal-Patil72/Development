class Calculate:
	def __init__(self,iKilo):
		self.meter=1000;
		self.kilometer=iKilo;
		self.result=None;

	def CalculateArera(self):
		self.result=self.meter*self.kilometer;
		return self.result;

def main():
	print("Enter kilometer");
	value1=int(input());

	
	obj=Calculate(value1);

	res=obj.CalculateArera()

	print(res);

if __name__=="__main__":
	main();
