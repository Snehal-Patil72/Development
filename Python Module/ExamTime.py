def Check(ch):
	
	if(ch.lower()=="a"):
		print("Exam at 7 Am");
	elif(ch.lower()=="b"):
		print("Exam At 8.30 AM");
	elif(ch.lower()=="c"):
		print("Exam At 9.20 AM");
	elif(ch.lower()=="d"):
		print("Exam At 10.30 AM");
	else:
		print("wrong input");


def main():
	print("Enter the character");
	c=input();

	Check(c);
if __name__=="__main__":
	main();