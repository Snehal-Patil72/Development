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

	def Search(self,no1,no2):
		
		for i in range(len(self.Arr)):
			if((self.Arr[i]>no1) & (self.Arr[i]<no2)):
				print(self.Arr[i]);
				

	
def main():
	print("Enter size of array");
	value=int(input());

	obj=Logic(value);
	obj.Accept();
	obj.Display();

	print("Enter Number to strating range");	

	iNo1=int(input());

	print("Enter second Number");

	iNo2=int(input());

	obj.Search(iNo1,iNo2);



if __name__=="__main__":
	main();