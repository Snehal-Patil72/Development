def Display(row,col):
	for i in range(row):
		for j in range(col):
			if(i==j):
				print("$",end="\t");
			else:
				print("*",end="\t");
		print();



def main():
	print("Enter no of row");
	iRow=int(input());
	
	print("Enter no of col");
	iCol=int(input());

	Display(iRow,iCol);

if __name__=="__main__":
	main();