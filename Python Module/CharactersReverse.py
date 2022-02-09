def Check(name):
	rname="";
	for i in range(len(name)-1,-1,-1):
		rname=rname+name[i];
			
			
	return rname;


def main():
	print("Enter string");
	value=input();


	ret=Check(value);

	print(ret);

if __name__=="__main__":
	main();