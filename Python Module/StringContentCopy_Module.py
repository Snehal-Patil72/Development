def CopyS(sname):
	Rname="";
	for i in range(len(sname)):
		Rname=Rname+sname[i];

	return Rname;

def main():
	print("Enter String");
	value=input();

	ret=CopyS(value);

	print(ret);

if __name__=="__main__":
	main();