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

	def Summation(self):
		iDigit=0;
		sum=0;
		data=[];
		
		for i in range(len(self.Arr)):
			while(self.Arr[i]!=0):
				iDigit=self.Arr[i]%10;
				sum=sum+iDigit
				self.Arr[i]=self.Arr[i]//10;

			data.append(sum);
			sum=0;

		return data;


def main():
	print("Enter size of array");
	no=int(input());

	obj=Number(no);
	obj.Accept();
	obj.Display();
	ret=obj.Summation();

	print(ret);

if __name__=="__main__":
	main();