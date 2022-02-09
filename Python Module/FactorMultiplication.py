def FcatorMul(iNo):
	sum=1;
	for i in range(1,iNo):
		if(iNo%i==0):
			sum=sum*i;	

	return sum;

def main():
	print("Enter Number");
	no=int(input());

	ret=FcatorMul(no);

	print(ret);

if __name__=="__main__":
	main();