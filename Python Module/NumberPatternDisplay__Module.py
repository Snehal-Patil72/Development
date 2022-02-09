def Display(iRow,iCol):
	for i in range(1,iRow+1):
		for j in range(1,iCol+1):
			print(j,end="\t");
		print("");

def main():
	print("Enter Number of Row");
	row=int(input());
	
	print("Enter No Of Coloumn");
	col=int(input());


	Display(row,col);

if __name__=="__main__":
	main();