class ArrayX:

	def __init__(self,iSize):
		self.Arr=[];
		self.size=iSize;

	def Accept(self):
		print("Enter Elemnets");
		for i in range(self.size):
			self.Arr.append(int(input()));

	def Display(self):
		print("Elemnets are");
		for i in range(self.size):
			print(self.Arr[i]);


class Number(ArrayX):
	
	def __init__(self,iLength):
		ArrayX.__init__(self,iLength);

	def Maximum(self):
		imax=self.Arr[0];
		for i in range(len(self.Arr)):
			if(self.Arr[i]>imax):
				imax=self.Arr[i];
		
		return imax;


def main():
	print("enter size of array");
	Arrsize=int(input());

	obj=Number(Arrsize);

	obj.Accept();
	obj.Display();
	ret=obj.Maximum();

	print("max",ret);

if __name__=="__main__":
	main();
