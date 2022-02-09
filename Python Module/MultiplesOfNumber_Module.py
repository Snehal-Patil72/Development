def ChkMutiples(value,iNo):
	for i in value:
		if(i%iNo==0):
			print(i);


def main():

	arr=[];

	print("Enter length of array");
	size=int(input());

	for i in range(size):
		arr.append(int(input()))

	print("Enter number to find multiples");
	data=int(input());

	ChkMutiples(arr,data)

if __name__=="__main__":
	main();