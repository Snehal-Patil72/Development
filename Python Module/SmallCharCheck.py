def Check(ch):
	if(ch[0]>="a") and (ch[0]<="z"):
		return True;
	else:
		return False;


def main():
	print("Enter the character");
	c=input();

	ret=Check(c);

	print(ret);

if __name__=="__main__":
	main();