def Divisible(value):
	if((value%5)==0):
		return True;
	else:
		return False;


def main():
	print("enter number");
	no=int(input());

	ret=Divisible(no);
	
	if(ret==True):
		print("True");
	else:
		print("False");

if __name__=="__main__":
	main();