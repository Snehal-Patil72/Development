def FcatorMul(iNo):
	sum=1;
	for i in range(iNo,1,-1):
		if(iNo%i==0):
			print(i);

def main():
	print("Enter Number");
	no=int(input());

	FcatorMul(no);

	

if __name__=="__main__":
	main();