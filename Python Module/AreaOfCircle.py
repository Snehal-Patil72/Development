class Calculate:
	def __init__(self,iRad):
		self.radius=iRad;
		self.PI=3.14;

	def CalculateArera(self):
		self.Area=self.PI*self.radius*self.radius;
		return self.Area;

def main():
	print("Enter Radious");
	value=float(input());

	obj=Calculate(value);

	res=obj.CalculateArera()

	print(res);

if __name__=="__main__":
	main();
