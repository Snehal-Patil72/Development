def Display(row,col):
	for i in range(1,row+1):
		if((i>1) & (i<row)):

			for j in range(1,col+1):
				if((j>1) & (j<col)):
					print("*",end="\t");
				else:
					print(j,end="\t");

		else:
			for k in range(1,col+1):
				print(k,end="\t");
		print();

def main():
	print("Enter no of row");
	iRow=int(input());
	
	print("Enter no of col");
	iCol=int(input());

	Display(iRow,iCol);

if __name__=="__main__":
	main();