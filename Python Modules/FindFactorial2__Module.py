def Factorial(value):
	fact=1;
	for i in range(1,value+1):
		fact=fact*i;

	return fact;



def main():
	print("enter number");
	no=int(input());

	ret=Factorial(no);

	print("fact",ret);

if __name__=="__main__":
	main();