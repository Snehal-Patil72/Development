def Display(value):
	ch='A';
	for i in range(value):
		print(ch,end="\t");
		ch=chr(ord(ch)+1);

def main():
	print("Enter Number");
	no=int(input());

	Display(no);

if __name__=="__main__":
	main();