def Count(value):
	icntC=0;
	icntS=0;
	for i in range(len(value)):
		if((value[i]>='A') & (value[i]<='Z')):
			icntC=icntC+1;
		else:
			icntS=icntS+1;

	return icntS-icntC;

	
def main():
	print("Enter string");
	name=input();

	ret=Count(name);

	print("Frequency Difference",ret);

if __name__=="__main__":
	main();