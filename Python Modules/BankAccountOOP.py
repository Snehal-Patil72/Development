class BankAccount:
	__ROI=10.5;

	def __init__(self):
		self.Name=None;
		self.Amount=None;

	def Accept(self):
		print("Enter name of Account Holder");
		self.Name=input();

		print("Enter Total Balance");
		self.Amount=int(input());

	def Display(self):
		print(f"Account Holder Name:{self.Name}");
		print(f"Balance: {self.Amount}");

	def Deposit(self):
		print("Enter Amount To Deposit");
		Damt=int(input());
		self.Amount=self.Amount+Damt;


	def Withdraw(self):
		print("Enter amount to withdraw");
		Wamt=int(input());
		self.Amount=self.Amount-Wamt;

	def CalculateIntrest(self):
		Intrest=0.0;
		Intrest=self.Amount*BankAccount.__ROI*1;
		print("Intrest :",Intrest);
			
def main():
	
	bobj1=BankAccount();
	bobj1.Accept();
	bobj1.Display();
	bobj1.Deposit();
	bobj1.Display();
	bobj1.Withdraw();
	bobj1.Display();
	bobj1.CalculateIntrest();

	bobj2=BankAccount();
	bobj2.Accept();
	bobj2.Display();
	bobj2.Deposit();
	bobj2.Display();
	bobj2.Withdraw();
	bobj2.Display();
if __name__=="__main__":
	main();
