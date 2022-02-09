def CopyS(sname):
	Rname="";
	for i in range(len(sname)):
		if(sname[i]>="A") and (sname[i]<="Z"):
			Rname=Rname+sname[i];

	return Rname;

def main():
	print("Enter String");
	value=input();

	ret=CopyS(value);

	print(ret);

if __name__=="__main__":
	main();