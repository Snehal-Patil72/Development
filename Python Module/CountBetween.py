def Count(value):
	icnt=0;
	iDigit=0;

	while(value!=0):
		iDigit=value%10;
		if((iDigit>3) & (iDigit<7)):
			icnt=icnt+1;
		value=value//10;

	return icnt;

def main():
	print("Enter Number");
	no=int(input());

	ret=Count(no);

	print(ret);

if __name__=="__main__":
	main();