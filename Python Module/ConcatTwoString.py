def CopyS(sname,cname):
	Rname=sname;
	Rname=Rname+" ";
	for i in range(len(cname)):
		Rname=Rname+cname[i];

	return Rname;

def main():
	print("Enter String");
	value=input();

	print("Enter second string");
	value2=input();

	ret=CopyS(value,value2);

	print(ret);

if __name__=="__main__":
	main();