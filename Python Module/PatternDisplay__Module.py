def Display(iRow,iCol):
	for i in range(iRow):
		for j in range(iCol):
			print("*",end="\t");
		print("");

def main():
	print("Enter Number of Row");
	row=int(input());
	
	print("Enter No Of Coloumn");
	col=int(input());


	Display(row,col);

if __name__=="__main__":
	main();