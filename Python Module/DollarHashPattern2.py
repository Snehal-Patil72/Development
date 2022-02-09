def Display(row,col):
	for i in range(row,0,-1):
		for j in range(col):
			if(i>1) and (i<row):
				if(j>0) and (j<col-1):
					if(j==i):
						print("*",end="\t");
					elif(j<i):
						print("#",end="\t");
					else:
						print("$",end="\t");
				else:
					print("*",end="\t");
			else:
				print("*",end="\t");
		print(" ");


def main():
	print("Enter Number of row");
	iRow=int(input());

	print("Enter Number of Col");
	iCol=int(input());


	Display(iRow,iCol);

if __name__=="__main__":
	main();