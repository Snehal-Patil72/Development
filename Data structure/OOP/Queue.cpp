#include<iostream>
using namespace std;

template <typename T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Queue    
{
private:
    node <T> *first;
    int size;
    
public:

          Queue();
          void Enqueue(T no);
		  int Dequeue();
		   void Display();
		   int Count();
};

    template <class T> 
    Queue<T>::Queue()
    {
        first = NULL;
        size = 0;
    }
    
	template <class T>
    void Queue<T>::Enqueue(T no)   // InsertLast()
    {
        node <T> *newn = new node<T>;
        newn->data = no;
        newn -> next = NULL;
        
        if(size == 0)   
        {
            first = newn;
        }
        else
        {
            node <T> *temp = first;
            while(temp->next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = newn;
        }
        size++;
    }
    
	template <class T>
    int Queue<T>::Dequeue()   // DeleteFirst()
    {
        int no = 0;
               node <T> *temp = first;
               
               if(size == 0)
               {
                   cout<<"Queue is empty\n";
                   return -1;
               }
               
               if(size == 1)
               {
                   no = first->data;
                   delete first;
                   first = NULL;
               }
               else
               {
                   no = first->data;
                   first = first -> next;
                   delete temp;
               }
               
               size--;
               return no;
               // Logic
    }
    
	template <class T>
    void Queue<T>::Display()
    {
        node <T> *temp = first;

        for(int i = 1 ; i <= size; i++, temp = temp->next)
        {
            cout<<"|"<<temp->data<<"|-> ";
        }
        cout<<"\n";
    }
    
	template <class T>
    int Queue<T>::Count()
    {
        return size;
    }


int main()
{
    Queue <char>obj;
	int iChoice=1;
	char value=0;
	int iret=0,icnt=0;
	
	while(iChoice!=0)
	{
		
		cout<<"____________________________________________________________\n";
		cout<<"Enter the operation you want to perform on Queue\n";
		cout<<"1: Enqueue element into Queue\n";
		cout<<"2: Dequeue element from Queue\n";
		cout<<"3: Display element of Queue\n";
		cout<<"4: Count element of Queue\n";
		cout<<"0:exit from stack\n";
		cout<<"_____________________________________________________________\n";
		
		cin>>iChoice;
		
		switch(iChoice)
		{
			case 1:
			       cout<<"Enter data to Enqueue\n";
				   cin>>value;
				   obj.Enqueue(value);
				   break;
		    case 2:
                   iret=obj.Dequeue();			
			       cout<<"Removed element:"<<iret;
				   cout<<"\n";
				   break;
				   
		    case 3:
                      obj.Display();
					  cout<<"\n";
                       break;
            
            case 4: 
                      icnt=obj.Count();
                     cout<<"Count:"<<icnt;
					 cout<<"\n";
                     break;

            case 0:
			        cout<<"Thanks for using marvellous stack\n";
					break;

            default:
                    cout<<"you enter wrong choice\n";
                    break;					
			
		}
	}
	return 0;
}
