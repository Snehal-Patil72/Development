def Display(row,col):
	ch='A';
	for i in range(1,row+1):
		ch='A';
		for j in range(col):
			if((i%2)!=0):
				print(ch,end="\t");
				ch=chr(ord(ch)+1);
			else:
				print(chr(ord(ch)+32),end="\t");
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