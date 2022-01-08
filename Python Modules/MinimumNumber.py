def Minimum(value):
	imin=value[0];

	for i in range(len(value)):
		if(value[i]<imin):
			imin=value[i]

	return imin;



def main():

	data=[]

	print("enter the size of list")
	size=int(input())

	for i in range(size):
		data.append(int(input()))

	ret=Minimum(data)

	print("Max",ret)


if __name__=="__main__":
	main()