
def Display(value=1):
	if(value<=5):
		print(value,end="\t")
		value=value+1;
		Display(value);


def main():
	
	Display();


if __name__=="__main__":
	main();