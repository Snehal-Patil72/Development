def Check(value):
	for i in range(len(value)):
		flag=False;
		if((value[i]=='a') | (value[i]=='e') | (value[i]=='i') | (value[i]=='o') | (value[i]=='u')):			
			flag=True;
			break;
		else:
			flag=False;

	return flag;


def main():
	print("Enter String");
	name=input();

	ret=Check(name);

	if(ret==True):
		print("Contains Vowel");
	else:
		print("Not Contain Vowel");

if __name__=="__main__":
	main();
