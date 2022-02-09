def Count(value):
	icnt=0;
	for i in range(len(value)):
		if((value[i]>='a') & (value[i]<='z')):
			icnt=icnt+1;
	return icnt;


def main():
	print("Enter string");
	name=input();

	ret=Count(name);

	print("Small Count",ret); 

if __name__=="__main__":
	main();