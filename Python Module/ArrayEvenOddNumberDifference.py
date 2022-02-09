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

	def Count(self):
		icnt=0;
		icntO=0;
		for i in range(self.size):
			if(self.Arr[i]%2==0):
				icnt=icnt+1;
			else:
				icntO=icntO+1;

		return icnt-icntO;
	
def main():
	print("Enter Size of array");
	ArrSize=int(input());

	obj=Logic(ArrSize);
	obj.Accept();
	obj.Display();

	ret=obj.Count();
	print(ret);

if __name__=="__main__":
	main();