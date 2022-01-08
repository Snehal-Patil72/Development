def Display(row,col):
	ch='A';
	for i in range(row):
		ch='A';
		for j in range(col):
			print(ch,end="\t");
			ch=chr(ord(ch)+1);
		print();


def main():
	print("enter number of row");
	iRow=int(input());

	print("Enter number of coloumn");
	iCol=int(input());

	Display(iRow,iCol);

if __name__=="__main__":
	main();