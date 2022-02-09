def Count(iNo):
	icnt=1;
	while(iNo!=0):
		iDigit=iNo%10;
		if(iDigit!=0):
			icnt=icnt*iDigit;
		iNo=iNo//10;

	return icnt;

def main():
	print("Enter Number");
	no=int(input());

	ret=Count(no);

	print(ret);

if __name__=="__main__":
	main();