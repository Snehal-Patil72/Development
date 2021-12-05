#include<iostream>
using namespace std;

template <typename T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Stack     
{
private:
    node <T> *first;
    int size;
    
public:
    Stack();
    void push(T); 
    int pop(); 
	void Display();
    int Count();
};
    template <class T>
    Stack<T>::Stack()
    {
        first = NULL;
        size = 0;
    }
    
    template <class T>
    void Stack<T>::push(T no)   // InsertFirst()
    {
        node <T> *newn = new node<T>;
        newn->data = no;
        newn->next = NULL;
        
        if(first == NULL)
        {
            first = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }
        size++;
    }
    
    template <class T>
    int Stack<T>::pop()   // DeleteFirst()
    {
        int no = 0;
        node <T> *temp = first;
        
        if(size == 0)
        {
            cout<<"Stack is empty\n";
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
    void Stack<T>::Display()
    {
        node <T> *temp = first;
        
        while(temp != NULL)
        {
            cout<<"|"<<temp->data<<"|"<<"\n";
            temp = temp->next;
        }
    }
    
	template <class T>
    int Stack<T>::Count()
    {
        return size;
    }


int main()
{
   Stack <char>obj;
	int iChoice=1;
	char value='\0';
	int iret=0,icnt=0;
	
	while(iChoice!=0)
	{
		
		cout<<"____________________________________________________________\n";
		cout<<"Enter the operation you want to perform on stack\n";
		cout<<"1: push element into stack\n";
		cout<<"2: pop element from stack\n";
		cout<<"3: Display element of stack\n";
		cout<<"4: Count element of stack\n";
		cout<<"0:exit from stack\n";
		cout<<"_____________________________________________________________\n";
		
		cin>>iChoice;
		
		switch(iChoice)
		{
			case 1:
			       cout<<"Enter data to push\n";
				   cin>>value;
				   obj.push(value);
				   break;
		    case 2:
                   iret=obj.pop();			
			       cout<<"pop element:"<<iret;
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
