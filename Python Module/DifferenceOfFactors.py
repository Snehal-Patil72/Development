def FcatorMul(iNo):
	sum=0;
	Nsum=0
	for i in range(1,iNo):
		if(iNo%i==0):
			sum=sum+i;
		else:
			Nsum=Nsum+i;

	print(sum-Nsum);

def main():
	print("Enter Number");
	no=int(input());

	FcatorMul(no);

	

if __name__=="__main__":
	main();