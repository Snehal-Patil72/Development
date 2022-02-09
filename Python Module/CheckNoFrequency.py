def Frequency(value,no):
	count=0

	for i in range(len(value)):
		if(value[i]==no):
			count=count+1;


	return count


def main():
	data=[]

	print("enter size")
	size=int(input())

	for i in range(size):
		data.append(int(input()))


	print("Enter number to serach")
	iNo=int(input())


	ret=Frequency(data,iNo)

	print("Frequency",ret)



if __name__=="__main__":
	main()