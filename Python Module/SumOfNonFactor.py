def FcatorMul(iNo):
	sum=0;
	for i in range(iNo,0,-1):
		if(iNo%i!=0):
			sum=sum+i;

	print(sum);

def main():
	print("Enter Number");
	no=int(input());

	FcatorMul(no);

	

if __name__=="__main__":
	main();