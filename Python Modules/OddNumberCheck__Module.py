def Check(value):
	if(value%2==0):
		return True;
	else:
		return False;


def main():
	print("Enter number");
	no=int(input());

	ret=Check(no);

	if(ret==True):
		print("Even number");
	else:
		print("odd number");


if __name__=="__main__":
	main();