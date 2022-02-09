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

	def DigitCheck(self):
		iDigit=0;
		temp=0;
		icnt=0;
		count=0;
		for i in range(len(self.Arr)):
			temp=self.Arr[i];
			while(self.Arr[i]!=0):
				iDigit=self.Arr[i]%10;
				icnt=icnt+1;
				self.Arr[i]=self.Arr[i]//10;
				
			if(icnt==3):
				print(temp,end="\t");
			icnt=0;

		

def main():
	print("enetr number");
	no=int(input());

	obj=Number(no);

	obj.Accept();
	obj.Display();
	obj.DigitCheck();


if __name__=="__main__":
	main();