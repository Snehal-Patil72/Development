class Number:
	def __init__(self,no):
		self.value=no;

	def ChkPrime(self):
		flag=True;
		for i in range(2,self.value):
			if(self.value%i==0):
				flag=False;
		return flag;

	def Factor(self):
		for no in range(1,self.value):
			if(self.value%no==0):
				print(no,end="\t");
		print();		


	def SumFactor(self):
		sum=0;
		for i in range(1,self.value):
			if(self.value%i==0):
				sum=sum+i;

		return sum;


	def ChkPerfect(self):
		ret=self.SumFactor();
		if(ret==self.value):
			return True;
		else:
			return False;


def main():
	print("Enter Number");
	iNo=int(input());

	obj=Number(iNo);
	obj.Factor();
	res=obj.ChkPrime();
	print("prime no",res);
	res=obj.ChkPerfect();
	print("Perfect no",res);
	res=obj.SumFactor();
	print("sum of factor:",res);


if __name__=="__main__":
	main();
