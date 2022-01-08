def Count(value):
	iDigit=0;
	icnt=0;
	while(value!=0):
		iDigit=value%10;
		if(iDigit<6):
			icnt=icnt+1;
		value=value//10;

	return icnt;


def main():	
	print("enter Number");
	no=int(input());

	ret=Count(no);

	print(ret);

if __name__=="__main__":
	main();