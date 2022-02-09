fact=1

def Factorial(value):
	global fact;
	if(value>0):
		fact=fact*value;
		value=value-1;
		Factorial(value);

	return fact;

def main():
	no=int(input("Enter No"));

	ret=Factorial(no);

	print("Factorial of No",ret);

if __name__=="__main__":
	main();