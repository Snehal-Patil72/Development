
def Display(value=5):
	if(value>0):
		print(value,end="\t")
		value=value-1;
		Display(value);


def main():
	
	Display();


if __name__=="__main__":
	main();