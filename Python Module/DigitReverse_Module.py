def DigitReverse(value):
	if(value<0):
		value=-value;

	iDigit=0;
	while(value!=0):
		iDigit=value%10;
		print(iDigit)
		value=value//10;


def main():
	print("Enter Number");
	no=int(input());

	DigitReverse(no);

if __name__=="__main__":
	main();