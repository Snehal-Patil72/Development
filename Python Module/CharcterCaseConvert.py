def Display(iNo):
	for i in range(1):
		if(iNo[i]>"A") or (iNo[i]<"Z"):
			iNo[i]=chr(ord(iNo[i])+32);
		elif(iNo[i]>"a") or (iNo[i]<"z"):
			iNo[i]=chr(ord(iNo[i])-32);

	print(iNo[0]);
def main():
	no=[]
	print("Enter character");
	no.append(input());
	
	Display(no);

if __name__=="__main__":
	main();