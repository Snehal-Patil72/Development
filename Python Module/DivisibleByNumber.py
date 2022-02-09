def ChkEven(value):
	for i in range(len(value)):
		if((value[i]%3==0) & (value[i]%5==0)):
			print(value[i]);


def main():
	Arr=[];

	print("Enter sixe of Array");
	size=int(input());

	for i in range(size):
		Arr.append(int(input()))

	ChkEven(Arr);

if __name__=="__main__":
	main();