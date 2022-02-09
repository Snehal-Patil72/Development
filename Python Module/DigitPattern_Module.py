def Diplay(row,col):
	for i in range(row,0,-1):
		for j in range(col):
			print(i,end="\t");
		print();

def main():
	print("enter no of row");
	iRow=int(input());

	print("Enter no of col");
	iCol=int(input());

	Diplay(iRow,iCol);

if __name__=="__main__":
	main();