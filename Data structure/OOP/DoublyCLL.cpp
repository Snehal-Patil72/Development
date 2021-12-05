#include<iostream>

using namespace std;

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}NODE,*PNODE,**PPNODE;

class DoublyDCL
{
	private:
	    PNODE first;
		PNODE last;
		int size;
		
	public:
	      DoublyDCL();
		  void InsertFirst(int);
		  void InsertLast(int);
		  void InsertAtPos(int,int);
		  void DeleteFirst();
		  void DeleteLast();
		  void DeleteAtPos(int);
		  void Display();
		  int Count();
};

DoublyDCL::DoublyDCL()
{
	first=NULL;
	last=NULL;
	size=0;
}

void DoublyDCL::InsertFirst(int no)
{
PNODE newn=new NODE;

newn->data=no;
newn->prev=NULL;
newn->next=NULL;

if(first==NULL)
{
first=newn;
last=newn;
}
else 
{	
newn->next=first;
newn->next->prev=newn;
newn->prev=last;
first=newn;	
}
last->next=first;
size++;
}

void DoublyDCL::InsertLast(int no)
{
PNODE newn=new NODE;

newn->data=no;
newn->prev=NULL;
newn->next=NULL;

if(first==NULL)
{
first=newn;
last=newn;
}
else 
{	
last->next=newn;
newn->next=first;
	newn->prev=last;
	last=newn;
}
last->next=first;
size++;
}

void DoublyDCL::DeleteFirst()
{
	if(first==NULL)
	{
		return;
	}
	else if(first->next==NULL)
	{
		delete first;
		first=NULL;
		
	}
	else
	{
		first=first->next;
		delete first->prev;
		first->prev=last;
		last->next=first;
		
		
	}
	size--;
	
}

void DoublyDCL::DeleteLast()
{
if(first==NULL)
	{
		return;
	}
	else if(first->next==NULL)
	{
		delete first;
		first=NULL;
		
	}	
else 
{	
last=last->prev;
delete last->next;
last->next=first;
}
size--;
}

void DoublyDCL::InsertAtPos(int no,int ipos)
{
	int i=1;
	PNODE temp=first;
	if((ipos<1) && (ipos>size+1))
	{
		cout<<"Invalid position"<<"\n";
		return;
	}
	
	if(ipos==1)
	{
		InsertFirst(no);
	}
	else if(ipos==size+1)
	{
	InsertLast(no);
	}
	else
	{
		PNODE newn=new NODE;
		newn->data=no;
		newn->next=NULL;
		newn->prev=NULL;
		
		
		while(i<ipos-1)
		{
			
			temp=temp->next;
			i++;
		}
		newn->next=temp->next;
		newn->next->prev=newn;
		temp->next=newn;
		newn->prev=temp;
		
	}
	size++;
}
	
void DoublyDCL::DeleteAtPos(int ipos)
{
	int i=1;
	PNODE temp=first;
	if((ipos<1) && (ipos>size))
	{
		cout<<"Invalid position"<<"\n";
		return;
	}
	
	if(ipos==1)
	{
		DeleteFirst();
	}
	else if(ipos==size)
	{
	DeleteLast();
	}
	else
	{
		while(i<ipos-1)
		{
			
			temp=temp->next;
			i++;
		}
		temp->next=temp->next->next;
		delete temp->next->prev;
		temp->next->prev=temp;
	}
	size--;	
	
}


void DoublyDCL::Display()
{
PNODE temp=first;
do
{
cout<<temp->data<<"\t";
temp=temp->next;	
	
}while(temp!=first);

}
int DoublyDCL::Count()
{
	return size;
}

int main()
{
	DoublyDCL obj;
	int Choice=1;
	int value=0,ipos=0,iRet=0;
	
	while(Choice!=0)
	{
		cout<<"_____________________________________________"<<"\n";
		cout<<"Enter the operation you want to perform on linled list"<<"\n";
		cout<<"1:Insert node at first position"<<"\n";
		cout<<"2:Insert node at last location"<<"\n";
		cout<<"3:Insert node at desired position"<<"\n";
		cout<<"4:Delete node at first position"<<"\n";
		cout<<"5:Delete node at last position"<<"\n";
		cout<<"6:Delete node at desired position"<<"\n";
		cout<<"7:Display linked list"<<"\n";
		cout<<"8:Count the node of linked list"<<"\n";
		cout<<"0:Exit"<<"\n";
		cout<<"_________________________________________________"<<"\n";
		
		cin>>Choice;
		
		cout<<"\n";
		
		switch(Choice)
		{
			case 1:
			       cout<<"Enter the data to insert"<<"\n";
				   cin>>value;
				   obj.InsertFirst(value);
		           break;
				   
		    case 2:
			       cout<<"Enter the data to insert"<<"\n";
				   cin>>value;
				   obj.InsertLast(value);
		           break;
				   
            case 3:
                   cout<<"Enter the data to insert"<<"\n";
				   cin>>value;
				   cout<<"\n";
				   cout<<"Enter the position"<<"\n";
				   cin>>ipos;
				   obj.InsertAtPos(value,ipos);
				   break;
				   
		    case 4:
                  obj.DeleteFirst();
                  break;

            case 5:
                  obj.DeleteLast();
				  break;
				  
		    case 6:
                  cout<<"Enter the position"<<"\n";
                  cin>>ipos;
                  obj.DeleteAtPos(ipos);
                  break;

            case 7:
			       obj.Display();
				   break;
			 
			case 8:
			        iRet=obj.Count();
					cout<<"\n";
					cout<<"Count of linked list:"<<iRet;
					cout<<"\n";
					break;
					
					
			case 0:
                  cout<<"Thanks for using marvellous linked list"<<"\n";
                  break;

            default:
                   cout<<"Enter Right choice"<<"\n";
                   break;
				   
		}
	}
   
	return 0;
}








