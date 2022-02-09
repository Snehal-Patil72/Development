class ArrayX:
	def __init__(self,size):
		self.Arr=[];
		self.iSize=size;

	def Accept(self):
		print("Enter Number")
		for i in range(self.iSize):
			self.Arr.append(int(input()));

	def Display(self):	
		print("elements are");
		for i in range(self.iSize):
			print(self.Arr[i]);

class Marvellous(ArrayX):
	def __init__(self,length):
		ArrayX.__init__(self,length);

	def EvenOddSum(self):
		Esum=0;
		Osum=0;
		for i in self.Arr:
			if(i%2==0):
				Esum=Esum+i;
			else:
				Osum=Osum+i;	

		return Esum-Osum;

def main():
	print("Enter size of Array");
	iLength=int(input());

	obj=Marvellous(iLength);

	obj.Accept();
	obj.Display();

	ret=obj.EvenOddSum();

	print("Sum is",ret);

if __name__=="__main__":
	main();