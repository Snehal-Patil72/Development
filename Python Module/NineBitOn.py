def Check(iNo):
	iMask=0X000001C0;
	iResult=0;
	iResult=iMask&iNo;
	if(iResult==iMask):
		return True;
	else:
		return False;
			

def main():
	print("Enter the Number");
	no=int(input());

	ret=Check(no);

	print(ret);

if __name__=="__main__":
	main();