def Multiply(value):
	imul=1;
	iDigit=0;
	while(value!=0):
		iDigit=value%10;
		if(iDigit!=0):
			imul=imul*iDigit;
		value=value//10;

	return imul;


def main():
	print("Enter Number");
	no=int(input());

	ret=Multiply(no);

	print(ret);

if __name__=="__main__":
	main();