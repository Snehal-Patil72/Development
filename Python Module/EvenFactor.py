def Display(iNo):
	for i in range(1,iNo):
		if(iNo%i==0) and (i%2==0):
			print(i);

def main():
	print("Enter Number");
	no=int(input());

	Display(no);

if __name__=="__main__":
	main();