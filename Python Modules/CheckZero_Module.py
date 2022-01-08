def CheckZero(value):
	iDigit=0;
	flag=False

	while(value!=0):
		iDigit=value%10;
		if(iDigit==0):
			flag=True;
			break;
		value=value//10;

	return flag;


def main():
	print("Enter Number");
	no=int(input());

	ret=CheckZero(no);

	if(ret==True):
		print("No Contain Zero")
	else:
		print("There is No Zero");

if __name__=="__main__":
	main();