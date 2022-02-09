def Check(c):
	if(c=="@") or (c=="&") or (c=="$"):
		print("True");
	else:
		print("wrong input");


def main():
	print("Enter the character");
	ch=input();

	Check(ch);

if __name__=="__main__":
	main();