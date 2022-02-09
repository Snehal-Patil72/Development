def Count(value):
	Esum=0;
	Osum=0;
	iDigit=0;
	while(value!=0):
		iDigit=value%10;
		if(iDigit%2==0):
			Esum=Esum+iDigit;
		else:
			Osum=Osum+iDigit;
		value=value//10;

	return Esum-Osum;



def main():
	print("Enter Number");
	no=int(input());

	ret=Count(no);
	print(ret);

if __name__=="__main__":
	main();