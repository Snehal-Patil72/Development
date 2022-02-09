from functools import reduce

def Prime(value):
	if(value==2):
		return True;
	for i in range(2,value):
		if (value%i==0):
			return False;
		else:
			return True;


Multiply=lambda no:no*2;

Max=lambda a,b:a if a>b else b;

def main():

	data=[];

	print("Enter list size");
	size=int(input())

	for i in range(size):
		data.append(int(input()))

	retF=list(filter(Prime,data));

	print(retF);

	retM=list(map(Multiply,retF))

	print(retM)

	retR=reduce(Max,retM)

	print(retR)

if __name__=="__main__":
	main()
