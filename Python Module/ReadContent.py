import os;

def ExistFile(fname,blocksize=1024):
	fd=open(fname,"r");
	buf=fd.read(blocksize);
	while(len(buf)>0):
		print(buf);
		buf=fd.read(blocksize);
		
	
		
def main():
	print("enter name of file");
	filename=input();

	ExistFile(filename);	

if __name__=="__main__":
	main();