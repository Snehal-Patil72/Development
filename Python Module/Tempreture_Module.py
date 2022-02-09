def Calculate(value):
	minus=value-32
	cel=minus*(5/9)
	return cel;



def main():
	print("Enter Tempreture");
	no=int(input());

	ret=Calculate(no);
	print(ret);	



if __name__=="__main__":
	main();