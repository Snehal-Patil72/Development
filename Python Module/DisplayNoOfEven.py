def Display(iNo):
	for i in range(1,iNo+1):
		print(i*2);

def main():
	print("Enter Number");
	no=int(input());

	Display(no);

if __name__=="__main__":
	main();