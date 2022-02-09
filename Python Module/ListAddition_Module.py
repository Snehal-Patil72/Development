def Addition(value):
	sum=0;
	for i in range(len(value)):
		sum=sum+value[i]

	return sum;


def main():
	data=[]

	print("Enter Total no of element")
	size=int(input())

	for i in range(size):
		data.append(int(input()))

	ret=Addition(data)

	print("Sum",ret)



if __name__=="__main__":
	main()

