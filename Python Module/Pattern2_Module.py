def Display(value):
	for i in range(value,0,-1):
		print(f"{i} \t#",end="\t");

def main():
	print("Enter Number");
	no=int(input());

	Display(no);

if __name__=="__main__":
	main();