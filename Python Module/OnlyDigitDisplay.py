class StringX:
	def __init__(self):
		self.stringname=None;
	
	def Accept(self):
		print("Enter string");
		self.stringname=input();

	def Display(self):
		print(self.stringname);


class LogicX(StringX):
	def __init__(self):
		StringX.__init__(self);

	def ToToggle(self):
		rtrname="";
		for i in range(len(self.stringname)):
			if(self.stringname[i].isdigit()):
				rtrname=rtrname+self.stringname[i];
		return rtrname;		

def main():
	obj=LogicX();
	obj.Accept();
	obj.Display();
	ret=obj.ToToggle();
	#obj.Display();
	print(ret);

if __name__=="__main__":
	main(); 