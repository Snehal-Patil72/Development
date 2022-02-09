def CopyS(sname,iNo):
	Rname="";
	for i in range(iNo):
		Rname=Rname+sname[i];

	return Rname;

def main():
	print("Enter String");
	value=input();

	print("enter number to copy");
	no=int(input());

	ret=CopyS(value,no);

	print(ret);

if __name__=="__main__":
	main();