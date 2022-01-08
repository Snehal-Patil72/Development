def Display(value):
	for i in range(value,0,-1):
		for i in range(i):
			print("*",end="\t");

		print();


def main():
	print("enter number");
	no=int(input());

	Display(no);


if __name__=="__main__":
	main();