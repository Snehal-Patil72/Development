def CheckPrime(value):
	flag=True;
	for i in range(2,value):
		if(value%i==0):
			flag=False;

	return flag;



def main():
	print("enter number")
	no=int(input());

	no=CheckPrime(no);

	if(no==True):
		print("no is prime");
	else:
		print("No not prime");

if __name__=="__main__":
	main();