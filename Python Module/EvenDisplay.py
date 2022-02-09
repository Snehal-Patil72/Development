def Display(value):
	for i in range(value):
		print("*",end="\t");



def main():
	print("Enter no of times");
	no=int(input());

	Display(no);

if __name__=="__main__":
	main()