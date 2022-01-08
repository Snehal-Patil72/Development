def CheckDivide(value):
	for i in range(len(value)):
		if(value[i]%5==0):
			print(value[i]);


def main():
	data=[]

	print("Enter Length of array");
	size=int(input());

	for i in range(size):
		print("Enter Number");
		data.append(int(input()));

	CheckDivide(data);

if __name__=="__main__":
	main();