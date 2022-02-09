class ArrayX:
	def __init__(self,iSize):
		self.Arr=[];
		self.size=iSize;

	def Accept(self):
		print("Enter Elementss");
		for i in range(self.size):
			self.Arr.append(int(input()));

	def Display(self):
		print("elements are");
		for i in range(self.size):
			print(self.Arr[i]);

class Number(ArrayX):
	def __init__(self,iLength):
		ArrayX.__init__(self,iLength);

	def Difference(self):
		imax=self.Arr[0];
		imin=self.Arr[0];
		Diff=0;

		for i in range(len(self.Arr)):
			if(self.Arr[i]>imax):
				imax=self.Arr[i];
			elif(self.Arr[i]<imin):
				imin=self.Arr[i];


		Diff=imax-imin;
		return Diff;

def main():
	print("enter size of array");
	no=int(input());

	obj=Number(no);

	obj.Accept();
	obj.Display();
	ret=obj.Difference();

	print("diff",ret);

if __name__=="__main__":
	main();