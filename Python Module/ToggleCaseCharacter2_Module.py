def Check(c):
	if(c>="A") and (c<="Z"):
		print(c.lower());
	elif(c>="a") and (c<="z"):
		print(c.upper());

def main():
	print("Enter the character");
	ch=input();

	Check(ch);

if __name__=="__main__":
	main();