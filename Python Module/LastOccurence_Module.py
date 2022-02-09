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

	def Search(self,no):
		index=-1;
		for i in range(len(self.Arr)):
			if(self.Arr[i]==no):
				index=i;
				

		return index;


def main():
	print("Enter size of array");
	value=int(input());

	obj=Logic(value);
	obj.Accept();
	obj.Display();

	print("Enter Number to search occurance");	

	iNo=int(input());

	res=obj.Search(iNo);

	if(res==-1):
		print("No not present");
	else:
		print("No present at ",res);



if __name__=="__main__":
	main();