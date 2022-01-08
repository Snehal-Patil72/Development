from MarvellousNum import *



def main():
	data=[]

	print("enter size")
	size=int(input())

	for i in range(size):
		data.append(int(input()))

	ret=ChkPrime(data)

	print("Add",ret)


if __name__=="__main__":
	main()