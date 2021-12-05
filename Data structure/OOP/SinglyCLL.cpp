#include<iostream>
using namespace std;

template <typename T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyCL
{
private:
    node <T> *first;
    node <T> *last;
    int size;
    
public:
   
     SinglyCL();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T , int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};


//////////////////////////////////////////////////////////////////
//
//Function name : SinglyCL(Constructor)
//Input : void
//Output : void
//Discription : To initialize value of data fields of class
//Author : Snehal Dilip Patil
//Date : 3/9/2021
//
/////////////////////////////////////////////////////////////////

template <class T>
 SinglyCL<T>::SinglyCL()
    {
        first = NULL;
        last = NULL;
        size = 0;
    }
    
//////////////////////////////////////////////////////////////////
//
//Function name : Display
//Input : void
//Output : void
//Discription :Display all node of linked list
//Author : Snehal Dilip Patil
//Date : 3/9/2021
//
/////////////////////////////////////////////////////////////////


	template <class T>
    void SinglyCL<T>::Display()
    {
        node <T> *temp  = first;
        
        if((first == NULL) && (last == NULL))
        {
            return;
        }
        
        do
        {
            cout<<"|"<<temp->data<<"|-> ";
            temp = temp->next;
        }while(temp != last->next);
        
        cout<<"\n";
    }

//////////////////////////////////////////////////////////////////
//
//Function name : Count
//Input : void
//Output : Integer
//Discription : Return total number node in linked list
//Author : Snehal Dilip Patil
//Date : 3/9/2021
//
/////////////////////////////////////////////////////////////////
    
	template <class T>
    int SinglyCL<T>::Count()
    {
        return size;
    }
    
//////////////////////////////////////////////////////////////////
//
//Function name : InsertFirst
//Input : Integer
//Output : void
//Discription : Insert node at first position in linked list
//Author : Snehal Dilip Patil
//Date : 3/9/2021
//
/////////////////////////////////////////////////////////////////

	template <class T>
    void SinglyCL<T>::InsertFirst(T no)
    {
        node <T> *newn = new node<T>;
        
        newn->data = no;
        newn->next = NULL;
        
		
        if((first == NULL) && (last == NULL))
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }
        
        last->next = first;
        size++;
    }

/////////////////////////////////////////////////////////////////////
 //
//Function name : InsertLast
//Input : Integer
//Output : void
//Discription : Insert node at last position in linked list
//Author : Snehal Dilip Patil
//Date : 3/9/2021
//
/////////////////////////////////////////////////////////////////
    
	template <class T>
    void SinglyCL<T>::InsertLast(T no)
    {
        node <T> *newn = new node<T>;
        
        newn->data = no;
        newn->next = NULL;
        
        if((first == NULL) && (last == NULL))
        {
            first = newn;
            last = newn;
        }
        else
        {
            last->next = newn;
            last = newn;
        }
        
        last->next = first;
        size++;
    }

 //////////////////////////////////////////////////////////////////////
 //
//Function name : InsertAtPos
//Input : Integer,Integer
//Output : void
//Discription : Insert node at desired position in linked list
//Author : Snehal Dilip Patil
//Date : 3/9/2021
//
/////////////////////////////////////////////////////////////////
    
	template <class T>
    void SinglyCL<T>::InsertAtPos(T no, int ipos)
    {
        if((ipos < 1) || (ipos > (size+1)))
        {
            return;
        }
        
        if(ipos ==1)
        {
            InsertFirst(no);
        }
        else if(ipos == size+1)
        {
            InsertLast(no);
        }
        else
        {
            node <T> *newn = new node<T>;
            
            newn->data = no;
            newn->next = NULL;
            
            node <T> *temp = first;
            
            for(int i = 1; i < ipos-1; i++)
            {
                temp = temp->next;
            }
            
            newn->next = temp->next;
            temp->next = newn;
            
            size++;
        }
    }
   
//////////////////////////////////////////////////////////////////
//
//Function name : DeleteFirst
//Input : void
//Output : void
//Discription : Delete node of first position in linked list
//Author : Snehal Dilip Patil
//Date : 3/9/2021
//
/////////////////////////////////////////////////////////////////
   
	template <class T>
    void SinglyCL<T>::DeleteFirst()
    {
        if((first == NULL) && (last == NULL))
        {
            return;
        }
        else if(first == last)
        {
            delete first;
            first = NULL;
            last = NULL;
        }
        else
        {
            first = first->next;
            delete last->next;
            last->next = first;
        }
        size--;
    }
   
//////////////////////////////////////////////////////////////////
//
//Function name : DeleteLast
//Input : void
//Output : void
//Discription : Delete node of last position in linked list
//Author : Snehal Dilip Patil
//Date : 3/9/2021
//
/////////////////////////////////////////////////////////////////
   
	template <class T>
    void SinglyCL<T>::DeleteLast()
    {
        node <T> *temp = first;
        
        if((first == NULL) && (last == NULL))
        {
            return;
        }
        else if(first == last)
        {
            delete first;
            first = NULL;
            last = NULL;
        }
        else
        {
            while(temp->next != last)
            {
                temp = temp -> next;
            }
            
            delete last;
            last = temp;
                
            last->next = first;
        }
        size--;
    }
 
//////////////////////////////////////////////////////////////////
//
//Function name : DeleteAtPos
//Input : Integer
//Output : void
//Discription : Delete node of desired position in linked list
//Author : Snehal Dilip Patil
//Date : 3/9/2021
//
/////////////////////////////////////////////////////////////////
 
	template <class T>
    void SinglyCL<T>::DeleteAtPos(int ipos)
    {
        if((ipos < 1) || (ipos > size))
        {
            return;
        }
        
        if(ipos ==1)
        {
            DeleteFirst();
        }
        else if(ipos == size)
        {
            DeleteLast();
        }
        else
        {
            node <T> *temp = first;
            for(int i = 1; i < ipos-1; i++)
            {
                temp = temp->next;
            }
            
            node <T> *targated = temp->next;
            
            temp->next = targated->next;    // temp->next = temp->next->next;
            delete targated;
            
            size--;
        }
        
    }
int main()
{
   SinglyCL <char>obj;
	int Choice=1;
	char value='\0';
	int ipos=0,iRet=0;
	
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
