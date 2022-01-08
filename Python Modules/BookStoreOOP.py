class BookStore:
	__NoOfBooks=0;
	def __init__(self):
		self.Book="";
		self.Author="";
		BookStore.__NoOfBooks=BookStore.__NoOfBooks+1;

	def Accept(self):
		print("Enter Book Name");
		self.Book=input();

		print("Enter Author Name");
		self.Author=input();

	def Display(self):
		print(f"{self.Book} by {self.Author}");
		print(BookStore.__NoOfBooks);


def main():
	obj=BookStore();
	obj.Accept();
	obj.Display();

	obj1=BookStore();
	obj1.Accept();
	obj1.Display();

if __name__=="__main__":
	main();