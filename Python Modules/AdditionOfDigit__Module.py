def Add(value):
	sum=0;
	iDigit=0;
	while(value!=0):
		iDigit=value%10;
		sum=sum+iDigit;
		value=value//10;

	return sum;


def main():
	print("enter number");
	no=int(input());

	ret=Add(no);

	print("Add",ret);

if __name__=="__main__":
	main();