def ChkPrime(value):
	sum=0;
	flag=True

	for no in value:
		for i in range(2,no):
			if((no%i)==0):
				flag=False
		if(flag==True):
			sum=sum+no;

		flag=True
		

	return sum;