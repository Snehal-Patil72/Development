def Count(value):
	icnt=0;
	while(value!=0):		
		icnt=icnt+1;
		value=value//10;

	return icnt;


def main():
	print("enter number");
	no=int(input())

	ret=Count(no)

	print("Count",ret);

if __name__=="__main__":
	main();