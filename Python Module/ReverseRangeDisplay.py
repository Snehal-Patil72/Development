def RangeDisplay(start,end):
	sum=0;
	for i in range(end,start+1,-1):
		print(i);


def main():
	print("Enter the starting range");
	srange=int(input());

	print("enter ending range");
	erange=int(input());

	RangeDisplay(srange,erange);

	

if __name__=="__main__":
	main();