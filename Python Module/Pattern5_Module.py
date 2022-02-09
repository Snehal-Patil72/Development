def Display(value):
	for i in range(1,value+1):
		print(i*2,end="\t");

def main():
	print("Enter Number");
	no=int(input());

	Display(no);

if __name__=="__main__":
	main();