def check(value):
	if(value==0):
		print("Zero");
	elif(value<0):
		print("negative no");
	elif(value>0):
		print("positive number");


		

def main():
	print("enter number");
	no=int(input());

	check(no);

if __name__=="__main__":
	main();