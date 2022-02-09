def Maximum(value):
	imax=value[0];

	for i in range(len(value)):
		if(value[i]>imax):
			imax=value[i]

	return imax;



def main():

	data=[]

	print("enter the size of list")
	size=int(input())

	for i in range(size):
		data.append(int(input()))

	ret=Maximum(data)

	print("Max",ret)


if __name__=="__main__":
	main()