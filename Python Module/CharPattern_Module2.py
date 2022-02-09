def Display(row,col):
	ch='A';
	for i in range(row):
		for j in range(col):
			print(ch,end="\t");
		ch=chr(ord(ch)+1);
		print();

def main():
	print("enter no of row");
	iRow=int(input());

	print("enter no of col");
	iCol=int(input());

	Display(iRow,iCol);

if __name__=="__main__":
	main();