def Display(value):
	if(value>0):
		print("*",end="\t");
		value=value-1;
		Display(value);

def main():
	print("Enter no of star to Display");
	no=int(input());

	Display(no)

if __name__=="__main__":
	main();