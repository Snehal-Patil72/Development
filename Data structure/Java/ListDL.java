class Node
{
public int data;
public Node next;
public Node prev;

}

class DoublyL
{

public Node first;
public int size;

public DoublyL()
{

first=null;
size=0;

}


public void InsertFirst(int no)
{

Node newn=new Node();

newn.data=no;
newn.next=null;
newn.prev=null;

if(first==null)
{
first=newn;

}
else
{
newn.next=first;
first=newn;
}
size++;
}

public void InsertLast(int no)
{
Node newn=new Node();

newn.data=no;
newn.next=null;
newn.prev=null;

if(first==null)
{
first=newn;

}
else
{
Node temp=first;

while(temp.next!=null)
{
temp=temp.next;
}
temp.next=newn;
newn.prev=temp;
}
size++;

}

public void DeleteFirst()
{
if(first==null)
{
	return;
}
else if(first.next==null)
{
	first=null;
}
else
{
first=first.next;
first.prev=null;

}

size--;
}


public void DeleteLast()
{
if(first==null)
{
	return;
}
else if(first.next==null)
{
first=null;
}
else
{
Node temp=first;

while(temp.next.next!=null)
{
	temp=temp.next;
}
temp.next=null;
}
size--;
}

public void Display()
{
Node temp=first;

while(temp!=null)
{
	System.out.print("|"+temp.data+"|->");
	temp=temp.next;
}
System.out.println("null");

}

public int Count()
{
	return size;
}

public void InsertAtPos(int no,int ipos)
{
if((ipos<1)||(ipos>size+1))
{
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
Node newn=new Node();

newn.data=no;
newn.next=null;
newn.prev=null;

Node temp=first;

for(int i=1;i<ipos-1;i++)
{
	temp=temp.next;
}
newn.next=temp.next;
temp.next=newn;
newn.prev=temp;
newn.next.prev=newn;


size++;
}
}	
public void DeleteAtPos(int ipos)
{
if((ipos<1)||(ipos>size))
{
return;
}
if(ipos==1)
{
DeleteFirst();
}
else if(ipos==size+1)
{
	DeleteLast();
}
else
{


Node temp=first;

for(int i=1;i<ipos-1;i++)
{
	temp=temp.next;
}
temp.next=temp.next.next;
temp.next.prev=temp;

size--;
}
}
}

class ListDL
{

public static void main(String arg[])
{

DoublyL obj=new DoublyL();


obj.InsertFirst(10);
obj.InsertFirst(20);
obj.InsertFirst(30);

obj.InsertLast(50);

obj.Display();

System.out.println("No of nodes "+obj.Count());

obj.DeleteLast();


obj.Display();

System.out.println("No of nodes "+obj.Count());

obj.InsertAtPos(70,2);

obj.Display();

obj.DeleteAtPos(2);

obj.Display();
}
}
