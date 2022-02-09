from sys import *
import os
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


def DisplayCheckSum(pathname):

	flag=os.path.isabs(pathname)
	if(flag==False):
		pathname=os.path.abspath(pathname);
		print(pathname);


	exists=os.path.isdir(pathname);
	
	if(exists):
		for foldername,subfolder,filename in os.walk(pathname):
				
			for filen in filename:
				#print(filen);
				print("---------------------------------------------------------------------");
				print("FileName:"+filen+ " CheckSum :", CheckSum(filen))

			print(' ');
	else:
		print("Invalid path");

def main():
	
	print("--------Automation Script By Snehal Patil--------");

	print("Application Name : ",argv[0]);

	if(len(argv)!=2):
		print("Error : Invalid Number of argument");
		exit();

	if(argv[1]=="-u") or (argv[1]=="-U"):
		print("Usage : Script is used to traverse specific directory");
		exit();

	if(argv[1]=="-h") or (argv[1]=="-H"):
		print("Usage : ApplicationName AbsolutePath_of_Directory");
		exit();
	
	try:
		DisplayCheckSum(argv[1]);

	except Exception as ex:
		print("Error : ",ex);

if __name__=="__main__":
	main();


