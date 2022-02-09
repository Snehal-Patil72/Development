def Count(value):
	icnt=0;
	for i in range(len(value)):
		if((value[i]>='A') & (value[i]<='Z')):
			icnt=icnt+1;

	return icnt;

def main():
	print("Enter String");
	name=input();

	ret=Count(name);

	print("Capital Letter",ret);

if __name__=="__main__":
	main();