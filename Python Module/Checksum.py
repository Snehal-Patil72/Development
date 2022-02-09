import os;
from sys import *
import hashlib

def CheckSum(file,blocksize=1024):
	print(file);
	hasher=hashlib.md5();
	fd=open(file,"rb");
	buf=fd.read(blocksize);
	while(len(buf)>0):
		hasher.update(buf)
		buf=fd.read(blocksize);
	fd.close();
	hashcode=hasher.hexdigest()
	
	return hashcode

			
def main():
	src=argv[1];
	des=argv[2]

	srcsum=CheckSum(src);
	dscsum=CheckSum(des);


	if(srcsum==dscsum):
		print("File have same content");
	else:
		print("File Does not contain same content");


if __name__=="__main__":
	main();