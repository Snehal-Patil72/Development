def Calculate(value):
	meter=0.0929;
	return value*meter	


def main():
	print("Enter area");
	no=int(input());
	
	ret=Calculate(no);

	print(ret);

if __name__=="__main__":
	main();