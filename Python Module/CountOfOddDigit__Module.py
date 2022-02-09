def Count(iNo):
	icnt=0;
	while(iNo!=0):
		iDigit=iNo%10;
		if(iDigit%2!=0):
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