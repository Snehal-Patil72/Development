def Check(name,ch):
	icnt=0;
	for i in range(len(name)):
		if(name[i]==ch):
			icnt=icnt+1;
			
	return icnt;


def main():
	print("Enter string");
	value=input();
	
	print("enter Charcter");
	c=input();

	ret=Check(value,c);

	print(ret);

if __name__=="__main__":
	main();