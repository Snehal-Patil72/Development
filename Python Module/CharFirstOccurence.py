def Check(name,ch):
	icnt=-1;
	for i in range(len(name)):
		if(name[i]==ch):
			icnt=i;
			break;
			
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