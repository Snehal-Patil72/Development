def Calculate(value):
	sum1=0;
	Esum=0;
	Osum=0;

	for i in range(len(value)):
		if(value[i]%2==0):
			Esum=Esum+value[i];
		else:
			Osum=Osum+value[i];

	sum1=Esum-Osum;

	return sum1;

	
def main():
	Arr=[];
	
	print("Enter length of array");
	size=int(input());

	for i in range(size):
		print("Enter Number");
		Arr.append(int(input()));

	ret=Calculate(Arr);

	print("Sum",ret);

if __name__=="__main__":
	main();