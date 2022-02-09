sum=0;


def SumDigit(value):
	iDigit=0;
	global sum;

	if(value!=0):
		iDigit=value%10;
		sum=sum+iDigit
		value=value//10;
		SumDigit(value);

	return sum;


def main():
	no=int(input("Enter Number"));

	ret=SumDigit(no)

	print("Sum of Digit",ret)

if __name__=="__main__":
	main();