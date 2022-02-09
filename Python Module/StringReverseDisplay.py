def Display(value):
	for i in range(len(value)-1,-1,-1):
		print(value[i],end="");

def main():
	print("enter string");
	name=input();

	Display(name);


if __name__=="__main__":
	main();