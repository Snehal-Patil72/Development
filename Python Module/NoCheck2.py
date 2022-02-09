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


	def Serach(self,no):
		flag=False;
		for i in range(len(self.Arr)):
			if(self.Arr[i]==no):
				flag=True;
				break;

		return flag;

def main():
	print("Enter size of array");
	value=int(input());

	obj=Logic(value);

	obj.Accept();
	obj.Display();

	print("Enter no to serach");
	iNo=int(input());

	res=obj.Serach(iNo);

	if(res==True):
		print("present");
	else:
		print("Not present");

if __name__=="__main__":
	main();