def Count(iNo):
	icnt=0;
	while(iNo!=0):
		iDigit=iNo%10;
		if(iDigit>3) and (iDigit<7):
			icnt=icnt+1;
		iNo=iNo//10;

	return icnt;

def main():
	print("Enter Number");
	no=int(input());

	ret=Count(no);

	print(ret);

if __name__=="__main__":
	main();