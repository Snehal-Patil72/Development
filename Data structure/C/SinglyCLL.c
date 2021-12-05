#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int no)
{

PNODE newn=NULL;

newn=(PNODE)malloc(sizeof(NODE));

newn->data=no;
newn->next=NULL;

if((*Head==NULL) && (*Tail==NULL))	
{
*Head=newn;
*Tail=newn;	
}
else
{
	newn->next=*Head;
	*Head=newn;
	
}
	(*Tail)->next=*Head;

}


void InsertLast(PPNODE Head,PPNODE Tail,int no)
{
	PNODE newn=NULL;

newn=(PNODE)malloc(sizeof(NODE));

newn->data=no;
newn->next=NULL;

if((*Head==NULL) && (*Tail==NULL))	
{
*Head=newn;
*Tail=newn;	
}
else
{
	(*Tail)->next=newn;
	*Tail=newn;
}
	(*Tail)->next=*Head;

}

void Display(PNODE Head,PNODE Tail)
{
	
if((Head==NULL) && (Tail==NULL))
{
return;
}

do
{
printf("|%d|->",Head->data);
Head=Head->next;

}while(Head!=Tail->next);	
	
}

int Count(PNODE Head,PNODE Tail)
{
	int icnt=0;
	
if((Head==NULL) && (Tail==NULL))
{
return 0;
}

do
{
	icnt++;
Head=Head->next;

}while(Head!=Tail->next);	
	
	return icnt;
}


void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	if((*Head==NULL) && (*Tail==NULL))
	{
		return;
	}
	else if(*Head==*Tail)
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
	}
	else
	{
		*Head=(*Head)->next;
		free((*Tail)->next);
		(*Tail)->next=*Head;
	}
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
	PNODE temp=*Head;
	
	if((*Head==NULL) && (*Tail==NULL))
	{
		return;
	}
	else if(*Head==*Tail)
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
	}
	else
	{
		while(temp->next!=*Tail)
		{
			temp=temp->next;
			
		}
		free(*Tail);
		*Tail=temp;
		(*Tail)->next=*Head;
		
	}
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int no,int pos)
{
	PNODE temp=*Head;
    PNODE newn=NULL;
	int size=Count(*Head,*Tail);
	int i=1;
	
	
	if((pos<1) || (pos>size+1))
	{
		return;
	}
	
	if(pos==1)
	{
		InsertFirst(Head,Tail,no);
	}
	else if(pos==size+1)
	{
		InsertLast(Head,Tail,no);
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

void DeleteAtPos(PPNODE Head,PPNODE Tail,int pos)
{
	PNODE temp=*Head;
	int size=Count(*Head,*Tail);
	int i=1;
	PNODE targeted=NULL;
	
	
	if((pos<1) || (pos>size))
	{
		return;
	}
	
	if(pos==1)
	{
		DeleteFirst(Head,Tail);
	}
	else if(pos==size)
	{
		DeleteLast(Head,Tail);
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
	PNODE last=NULL;
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
					InsertFirst(&first,&last,value);
		            break;
					
		    case 2:
			       printf("Enter data to insert\n");
				   scanf("%d",&value);
				   InsertLast(&first,&last,value);
			       break;
				   
		    case 3:
			       printf("Enter data to insert\n");
				   scanf("%d",&value);
				   printf("\n Enter position to insert\n");
				   scanf("%d",&iPos);
				   InsertAtPos(&first,&last,value,iPos);
				   break;
				   
		    case 4:
			        DeleteFirst(&first,&last);
					break;
					
			case 5:
			        DeleteLast(&first,&last);
					break;
					
			case 6:
			       printf("\n Enter position to Delete\n");
				   scanf("%d",&iPos);
				   DeleteAtPos(&first,&last,iPos);
				   break;
				   
			case 7:
			        Display(first,last);
					break;
					
			case 8:
			       iRet=Count(first,last);
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