import os;

def ExistFile(fname,matchstr,blocksize=1024):
	icnt=0;
	fd=open(fname,"r");
	buf=fd.read(blocksize);
	while(len(buf)>0):
		temp=buf
		for word in temp.split():
			if(word==matchstr):
				icnt=icnt+1;
		buf=fd.read(blocksize);
		
	return icnt;
	
		
def main():
	print("enter name of file");
	filename=input();

	print("Enter the string to search");
	strname=input();

	ret=ExistFile(filename,strname);	

	print("Frequency",ret);

if __name__=="__main__":
	main();