from Arthmatic import *

def main():
	print("Enter first number");
	no1=int(input())

	print("Enter second number");
	no2=int(input());

	ret=Addition(no1,no2);
	print("add",ret);

	ret=Subtract(no1,no2)
	print("sub",ret);

	ret=Division(no1,no2)
	print("Div",ret);

	ret=Multiply(no1,no2)
	print("Mul",ret);


if __name__=="__main__":
	main()



