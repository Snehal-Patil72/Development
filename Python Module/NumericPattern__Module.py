def Display(row,col):
	for i in range(row):
		for j in range(col):
			if(i>0) and (i<row-1):
				if(j>0) and (j<col-1):
					print("*",end="\t");
				else:
					print(j,end="\t");
			else:	
				print(j,end="\t");

		print(" ");

def main():
	print("Enter row");
	iRow=int(input());

	print("Enter Col");
	iCol=int(input());

	Display(iRow,iCol);

if __name__=="__main__":
	main();