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

	def ToLower(self):
		#print(self.stringname);
		self.stringname=self.stringname.upper()

def main():
	obj=LogicX();
	obj.Accept();
	obj.Display();
	obj.ToLower();
	obj.Display();
if __name__=="__main__":
	main(); 