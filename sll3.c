//Create a Singly Linked List with n nodes
//Using a seperate function for creating linked list
//by Simply

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*head,*temp,*p,*q;

void display()
{
	p = head;
	printf("The list is:\n");
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("\n");
}

void create(int n)
{
	int d;
	for(int i=1; i<=n; i++)
	{
		printf("Enter the data in node: ");
		scanf("%d",&d);
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=d;
		temp->next=NULL;
		if(i==1)
		{
			head=p=temp;
		}
		else
		{
			p->next=temp;
			p=temp;
		}
	}
}

void insertfirst()
{
	int d;
	printf("Enter the data for first:");
	scanf("%d",&d);
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=d;
	temp->next=head;
	head=temp;
}

void insertlast()
{
	int d;
	p=head;
	printf("Enter the data for last: ");
	scanf("%d",&d);
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=d;
	temp->next=NULL;
	while((p->next)!=NULL)
	{
		p=p->next;
	}
	p->next=temp;
}

void insertkey()
{
	int d,key;
	p=head;
	printf("Enter the data: ");
	scanf("%d",&d);
	printf("Enter key: ");
	scanf("%d",&key);
	temp=(struct node *)malloc(sizeof(struct node));
	while((p->next)!=NULL && (p->data)!=key)
	{
		p=p->next;
	}
	temp->data = d;
	temp->next = p->next;
	p->next = temp;
}

void deletefirst()
{
	p=head;
	if(p==NULL)
	{
		printf("Empty List");
	}
	else
	{
		q=p->next;
		head=q;
		free(p);
	}
}

void deletelast()
{
	p=head;
	while((p->next)!=NULL)
	{
		q=p;
		p=p->next;
	}
	free(p);
	q->next=NULL;
}

void deletekey()
{
	int key;
	p=head;
	printf("Enter key: ");
	scanf("%d",&key);
	while((p->next)!=NULL && (p->data)!=key)
	{
		q=p;
		p=p->next;
	}
	q->next=p->next;
	free(p);
}
	

void main()
{
	int n,ch;
	printf("Enter the number of nodes in SLL: ");
	scanf("%d",&n);
	create(n);
	
	while(1)
	{
		printf("1.Insert First\n2.Insert Last\n3.Insert after Key\n4.Delete First\n5.Delete Last\n6.Delete Key\n7.exit: ");
		scanf("%d",&ch);
		if(ch==1)
			insertfirst();
		else if(ch==2)
			insertlast();
		else if(ch==3)
			insertkey();
		else if(ch==4)
			deletefirst();
		else if(ch==5)
			deletelast();
		else if(ch==6)
			deletekey();
		else
			break;
		display();
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

