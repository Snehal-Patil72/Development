from functools import reduce;

Between=lambda no:((no>=70) and (no<=90));

Alter=lambda no : no+10;

Final=lambda a,b : a*b;

def main():
	data=[];

	print("Enter total no of elements");
	size=int(input())

	for i in range(size):
		data.append(int(input()));

	retF=list(filter(Between,data));

	print("Filter",retF);

	retM=list(map(Alter,retF));

	print(retM)

	retR=reduce(Final,retM);

	print(retR);


if __name__=="__main__":
	main();