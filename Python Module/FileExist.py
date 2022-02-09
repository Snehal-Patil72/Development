import os;

def ExistFile(fname):
	chaeckflag=False;
	path=os.getcwd();
	for foldername,subfolder,filen in os.walk(path):
		for name in filen:
			if(name==fname):
				chaeckflag=True;


	return chaeckflag;

		
def main():
	print("enter name of file");
	filename=input();

	flag=ExistFile(filename);	

	if(flag==True):
		print("File Exist in Current Directory");

	else:
		print("File Does Not Exist in Current Directory");

if __name__=="__main__":
	main();