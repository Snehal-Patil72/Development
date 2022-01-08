def Sum(value):
	isum=0;
	for i in range(1,value):
		if(value%i==0):
			isum=isum+i;
	return isum;

def main():
	print("enter number");
	no=int(input());

	ret=Sum(no);

	print("Add",ret);

if __name__=="__main__":
	main()