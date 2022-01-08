def Addition(value1,value2):
	return value1+value2;


def main():
	print("enter first number");
	no1=int(input());

	print("enter second number");
	no2=int(input());

	ret=Addition(no1,no2);

	print("Add ",ret);

if __name__=="__main__":
	main();