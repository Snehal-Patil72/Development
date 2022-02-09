def Display(row,col):
	for i in range(row,0,-1):
		for j in range(1,col+1):
			if(j==i):
				print("#",end="\t");
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