class ArrayX:
	def __init__(self,iSize):
		self.Arr=[];
		self.size=iSize

	def Accept(self):
		print("Enter Array Element");
		for i in range(self.size):
			self.Arr.append(int(input()));
		
	def Display(self):
		for i in range(self.size):
			print(self.Arr[i]);

class Logic(ArrayX):

	def __init__(self,length):
		ArrayX.__init__(self,length);

	def Count(self,iNo):
		icnt=0
		for i in range(self.size):
			if(self.Arr[i]==iNo):
				icnt=icnt+1;
	
		return icnt;
	
def main():
	print("Enter Size of array");
	ArrSize=int(input());

	obj=Logic(ArrSize);
	obj.Accept();
	obj.Display();

	print("Enter Number to search");
	no=int(input());

	ret=obj.Count(no);
	print(ret);

if __name__=="__main__":
	main();