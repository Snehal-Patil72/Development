def Check(name,ch):
	flag=False;
	for i in range(len(name)):
		if(name[i]==ch):
			flag=True;
			break;
		
	return flag;


def main():
	print("Enter string");
	value=input();
	
	print("enter Charcter");
	c=input();

	ret=Check(value,c);

	print(ret);

if __name__=="__main__":
	main();