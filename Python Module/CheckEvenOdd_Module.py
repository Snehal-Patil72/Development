def ChkEvenOdd(value):
	if(value%2==0):
		return True;
	else:
		return False;


def main():
	print("Enter Number");
	no=int(input());

	ret=ChkEvenOdd(no);

	if(ret==True):
		print("No is Even");
	else:
		print("Number is Odd");

if __name__=="__main__":
	main();