import os;
from sys import *

def CopyFile(source,destination,blocksize=1024):
	fd=open(source,"r");
	desfd=open(destination,"w");
	buf=fd.read(blocksize);
	while(len(buf)>0):
		desfd.write(buf);
		buf=fd.read(blocksize);
		
			
def main():
	src=argv[1];
	des=argv[2]
	CopyFile(src,des);	

if __name__=="__main__":
	main();