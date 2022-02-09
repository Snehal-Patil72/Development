def RangeDisplay(start,end):
	sum=0;
	for i in range(start,end+1):
		sum=sum+i;

	return sum;


def main():
	print("Enter the starting range");
	srange=int(input());

	print("enter ending range");
	erange=int(input());

	ret=RangeDisplay(srange,erange);

	print(ret);

if __name__=="__main__":
	main();