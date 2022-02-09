def Display(value):
	for i in range(1,value+1):
		for j in range(i):
			print(j+1,end="\t");
		print();


def main():
	print("enter no");
	no=int(input());

	Display(no);

if __name__=="__main__":
	main();
