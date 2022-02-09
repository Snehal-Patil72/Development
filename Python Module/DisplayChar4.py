def Check(c):
	if(c>="A") and (c<="Z"):
		val=ord(c);
		for i in range(val,90+1):
			print(c);
			c=(chr(ord(c)+1));
	elif(c>="a") and (c<="z"):
		val=ord(c);
		for i in range(val,122+1):
			print(c);
			c=(chr(ord(c)+1));

def main():
	print("Enter the character");
	ch=input();

	Check(ch);

if __name__=="__main__":
	main();