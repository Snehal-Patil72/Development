#include<iostream>

using namespace std;

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}NODE,*PNODE,**PPNODE;

class DoublyLL
{
	private:
	   PNODE first;
	   int size;
	   
	public:
	     
	DoublyLL()
	{
      first=NULL;
	  size=0;

	}		
	
	void InsertFirst(int no)
	{
		PNODE newn=NULL;
		
		newn=new NODE;
		
		newn->data=no;
		newn->next=NULL;
		newn->prev=NULL;
		
		if(first==NULL)
		{
			first=newn;
		}
		else
		{
			
			newn->next=first;
             first->prev=newn;
             first=newn;			 
		}
		
		size++;
	}
	
	void InsertLast(int no)
	{
		PNODE newn=NULL;
		PNODE temp=first;
		
		newn=new NODE;
		
	    newn->data=no;
		newn->next=NULL;
		newn->prev=NULL;
		
		if(first==NULL)
		{
			first=newn;
		}
		else
		{
			
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
			newn->prev=temp;
		}
		size++;
	}
	
	void DeleteFirst()
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
			first->prev=NULL;
					
		}
		size--;
	}
	
	void DeleteLast()
	{
		PNODE temp=first;
		
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
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			delete temp->next;
			temp->next=NULL;
					
		}
		size--;
	}
	
	void Display()
	{
		PNODE temp=first;
		
		while(temp!=NULL)
		{
			cout<<"|"<<temp->data<<"|->";
			temp=temp->next;
		}
		cout<<"NULL";
		
	}
	
	int Count()
	{
		return size;
	}
	
	void InsertAtPos(int no,int pos)
	{
		PNODE temp=first;
		PNODE newn=NULL;
		int i=1;
		

		
		if((pos<1) || (pos>size+1))
		{
			cout<<"Wrong position";
			return;
		}
		
		if(pos==1)
		{
			InsertFirst(no);
		}
		else if(pos==size+1)
		{
			InsertLast(no);

		}
		else
		{
			newn=new NODE;
			
			newn->data=no;
			newn->next=NULL;
			newn->prev=NULL;
			
			while(i<(pos-1))
			{
				temp=temp->next;
			}
			newn->next=temp->next;
			temp->next->prev=newn;
			temp->next=newn;
			newn->prev=temp;
			size++;


			
		}
	}
	
	void DeleteAtPos(int pos)
	{
		
		PNODE temp=first;
		int i=1;
		
		if((pos<1) || (pos>size))
		{
			cout<<"Wrong position";
			return;
		}
		
		if(pos==1)
		{
			DeleteFirst();
		}
		else if(pos==size)
		{
		DeleteLast();
		}
		else
		{
			
			while(i<(pos-1))
			{
				temp=temp->next;
			}
			temp->next=temp->next->next;
			delete temp->next->prev;
			temp->next->prev=temp;
			
					size--;

		}
		
		
	}
};


int main()
{
	DoublyLL obj;
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