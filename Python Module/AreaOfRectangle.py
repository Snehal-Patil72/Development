class Calculate:
	def __init__(self,iHei,iWid):
		self.height=iHei;
		self.width=iWid;
		self.Area=None;

	def CalculateArera(self):
		self.Area=self.height*self.width;
		return self.Area;

def main():
	print("Enter height");
	value1=float(input());

	print("enter width");
	value2=float(input());

	obj=Calculate(value1,value2);

	res=obj.CalculateArera()

	print(res);

if __name__=="__main__":
	main();
