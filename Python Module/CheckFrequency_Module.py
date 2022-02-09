def CheckFrequency(Value,iNo):
	iDigit=0;
	icnt=0;

	while(Value!=0):
		iDigit=Value%10;
		if(iDigit==iNo):
			icnt=icnt+1;
		Value=Value//10;

	return icnt;
			


def main():
	print("Enter Number");
	no=int(input());

	print("Enter No to Serach");
	data=int(input());

	ret=CheckFrequency(no,data);

	print(ret);

if __name__=="__main__":
	main();