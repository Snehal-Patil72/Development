from functools import reduce

Even=lambda no:(no%2==0)

Square=lambda no:(no*no);

Add=lambda a,b:a+b;

def main():
	data=[];

	print("Enter list size");
	size=int(input())

	for i in range(size):
		data.append(int(input()))

	retF=list(filter(Even,data))

	print("filter",retF)

	retM=list(map(Square,retF))

	print("map",retM);

	retR=reduce(Add,retM);

	print("reduce",retR);
	
if __name__=="__main__":
	main();