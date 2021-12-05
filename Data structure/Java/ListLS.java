class Node
{
	public int data;
	public Node next;
}


class SinglyLL
{
private Node first;
private int size;

public SinglyLL()
{
first=null;
size=0;

}

public void InsertFirst(int no)
{
Node newn=new Node();

newn.data=no;
newn.next=null;

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

}
size++;

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

public void DeleteFirst()
{
if(first==null)
{
	return;
}
else
{
	first=first.next;
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

public void InsertAtpos(int no,int ipos)
{
if((ipos<1) || (ipos>size+1))
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

Node temp=first;

for(int i=1;i<ipos-1;i++)
{
	temp=temp.next;
}
newn.next=temp.next;
temp.next=newn;
size++;
}

}
public void DeleteAtPos(int ipos)
{
if((ipos<1) || (ipos>size))
{
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
Node temp=first;

for(int i=1;i<ipos-1;i++)
{
	temp=temp.next;
}
temp.next=temp.next.next;

size--;
}
}
}
class ListLS
{
public static void main(String arg[])
{
SinglyLL obj=new SinglyLL();

obj.InsertFirst(10);
obj.InsertFirst(20);
obj.InsertFirst(30);

obj.InsertLast(40);

obj.Display();

System.out.println("No of Element in List"+obj.Count());

obj.DeleteFirst();

obj.Display();

obj.InsertAtpos(60,3);

obj.Display();


System.out.println("No of Element in List"+obj.Count());

obj.DeleteAtPos(3);


obj.Display();


System.out.println("No of Element in List"+obj.Count());

}

}