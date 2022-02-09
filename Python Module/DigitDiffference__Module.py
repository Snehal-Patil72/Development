def Count(iNo):
	iSumE=0;
	iSumO=0;
	while(iNo!=0):
		iDigit=iNo%10;
		if(iDigit%2==0):
			iSumE=iSumE+iDigit;
		else:
			iSumO=iSumO+iDigit;
		iNo=iNo//10;

	return iSumE-iSumO;

def main():
	print("Enter Number");
	no=int(input());

	ret=Count(no);

	print(ret);

if __name__=="__main__":
	main();