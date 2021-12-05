#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *next;	
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
PNODE newn=NULL;

newn=(PNODE)malloc(sizeof(NODE));

newn->data=no;
newn->next=NULL;

if(*Head==NULL)
{
*Head=newn;
}
else
{
newn->next=*Head;
*Head=newn;

}	
}

void InsertLast(PPNODE Head,int no)
{
PNODE newn=NULL;
PNODE temp=*Head;

newn=(PNODE)malloc(sizeof(NODE));

newn->data=no;
newn->next=NULL;

if(*Head==NULL)
{
*Head=newn;
}
else
{
while(temp->next!=NULL)
{
	temp=temp->next;
}	
temp->next=newn;

}
}

void DeleteFirst(PPNODE Head)
{
	PNODE temp=*Head;
	
if(*Head!=NULL)
{
	*Head=(*Head)->next;
	free(temp);
}
}

void DeleteLast(PPNODE Head)
{
	PNODE temp=*Head;
	
if(*Head==NULL)
{
	return;
}
else if((*Head)->next==NULL)
{
	free(*Head);
	*Head=NULL;
}
else
{
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
			free(temp->next);
			temp->next=NULL;

}
}

void Display(PNODE Head)
{
	printf("\n");
	printf("\n");
	while(Head!=NULL)
	{
		printf("|%d|->",Head->data);
		Head=Head->next;
	}
	printf("NULL\n");
}

int Count(PNODE Head)
{
	int iCnt=0;
	while(Head!=NULL)
	{
		iCnt++;
		Head=Head->next;
	}
	return iCnt;
}

void InsertAtPos(PPNODE Head,int no,int pos)
{
PNODE temp=*Head;
int size=0;
PNODE newn=NULL;
int i=1;

size=Count(*Head);

if((iPos<1) || (iPos>size+1))
	{
		printf("Invalid Position\n");
		return;
	}
	
if(pos==1)
{
InsertFirst(Head,no);
}
else if(pos==size+1)
{
InsertLast(Head,no);
}
else
{
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	
while(i<(pos-1))
{
	temp=temp->next;
	i++;
}
newn->next=temp->next;
temp->next=newn;
}	
}

void DeleteAtPos(PPNODE Head,int pos)
{
PNODE temp=*Head;
PNODE targeted=NULL;
int size=0;
int i=1;

size=Count(*Head);

if(pos==1)
{
DeleteFirst(Head);
}
else if(pos==size)
{
DeleteLast(Head);
}
else
{
while(i<pos-1)
{
	temp=temp->next;
	i++;
}
targeted=temp->next;
temp->next=targeted->next;
free(targeted);

}	
}

int main()
{
	PNODE first=NULL;
	int iChoice=1;
	int value=0,iPos=0,iRet=0;
	
	while(iChoice!=0)
	{
          printf("_______________________________________________________________\n");
          printf("Enter the operation you want to perform on linked list\n");
          printf("1:Insert node at first positiom\n");
          printf("2:Insert node at last position\n");
          printf("3:Insert node at desired position\n");
          printf("4:Delete node at first position\n");
          printf("5:Delete node at last position\n");
          printf("6::Delete node at desired position\n");
          printf("7:Display link list\n");
          printf("8:Count node in linked list\n");
          printf("0:Exit\n");
          printf("________________________________________________________________\n");
		  
          scanf("%d",&iChoice);
		  
          switch(iChoice)
		  {
			
             case 1:
			        printf("Enter data to insert\n");
					scanf("%d",&value);
					InsertFirst(&first,value);
		            break;
					
		    case 2:
			       printf("Enter data to insert\n");
				   scanf("%d",&value);
				   InsertLast(&first,value);
			       break;
				   
		    case 3:
			       printf("Enter data to insert\n");
				   scanf("%d",&value);
				   printf("\n Enter position to insert\n");
				   scanf("%d",&iPos);
				   InsertAtPos(&first,value,iPos);
				   break;
				   
		    case 4:
			        DeleteFirst(&first);
					break;
					
			case 5:
			        DeleteLast(&first);
					break;
					
			case 6:
			       printf("\n Enter position to Delete\n");
				   scanf("%d",&iPos);
				   DeleteAtPos(&first,iPos);
				   break;
				   
			case 7:
			        Display(first);
					break;
					
			case 8:
			       iRet=Count(first);
				   printf("count:%d\n",iRet);
				   break;
				   
			case 0:
                   printf("Thanks for using Marvellous linked list\n");
                   break;
				   
			default:
			      printf("Enter correct choice\n");
				  break;
				  
		  }
	}
	return 0;
}