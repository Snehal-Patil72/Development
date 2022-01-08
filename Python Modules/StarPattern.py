def Display(row,col):
	for i in range(row):
		for j in range(col):
			print("*",end="\t");
		print();


def main():

	print("Enter row");
	noR=int(input());

	print("Enter col");
	noC=int(input());

	Display(noR,noC);

if __name__=="__main__":
	main();