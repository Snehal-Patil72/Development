class ArrayX:

	def __init__(self,iSize):
		self.Arr=[];
		self.size=iSize;

	def Accept(self):
		print("Enter Elements");
		for i in range(self.size):
			self.Arr.append(int(input()));

	def Display(self):
		for i in range(len(self.Arr)):
			print(self.Arr[i])


class Logic(ArrayX):

	def __init__(self,iLength):
		ArrayX.__init__(self,iLength);

	def Calculate(self):
		for i in range(len(self.Arr)):
			if(self.Arr[i]%11==0):
				print(self.Arr[i])

def main():
	print("Enter size of array");
	value=int(input());

	obj=Logic(value);
	obj.Accept();
	obj.Display();

	obj.Calculate();
	

if __name__=="__main__":
	main();