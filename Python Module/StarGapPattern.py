def Display(row,col):
	for i in range(1,row+1):
		for j in range(1,col+1):
			if(i>1) and (i<row):
				if(j>1) and (j<col):
					if(i==j):
						print("*",end="\t");
					else:
						print(" ",end="\t");
				else:
					print("*",end="\t");

			else:
				print("*",end="\t");
		print(" ");

def main():
	print("Enter no of row");
	iRow=int(input());
	
	print("Enter no of col");
	iCol=int(input());

	Display(iRow,iCol);

if __name__=="__main__":
	main();