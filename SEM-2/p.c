//menu driven program for the operations of single linked list//
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *start = NULL,*temp,*prv,*newnode;
void create();
void traverse();
void insert_at_beginning();
void insert_at_end();
void insert_at_given_location();
void insert_after_a_node();
void delete_at_beginning();
void delete_from_end();
void delete_after_a_node();
void delete_at_given_location();
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.CREATE\n2.TRAVERSE\n3.INSERT AT BEGINNING\n4.INSERT AT END\n5.INSERT AT GIVEN LOCATION\n6.INSERT AFTER A NODE\n7.DELETE AT BEGINNING\n8.DELETE FROM END\n9.DELETE AFTER A NODE\n10.DELETE AT GIVEN LOCATION\n11.EXIT\n");
		printf("\nenter choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create();
			        break;
			case 2: traverse();
				break;
			case 3: insert_at_beginning();
				break;
			case 4: insert_at_end();
				break;
			case 5: insert_at_given_location();
				break;
			case 6: insert_after_a_node();
				break;
			case 7: delete_at_beginning();
				break;
			case 8: delete_from_end();
			        break;
			case 9: delete_after_a_node();
				break;
			case 10:delete_at_given_location();
				break;
			case 11:exit(0);
				break;
			default: printf("wrong choice");
		}
	}
}
void create()
{
	if(start==NULL)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter info");
		scanf("%d",&temp->info);
		temp->next=NULL;
		start = temp;
	}
	else
	{
		prv=start;
		while(prv->next!=NULL)
		{
			prv=prv->next;
		}
			temp=(struct node*)malloc(sizeof(struct node));
			printf("enter info");
			scanf("%d",&temp->info);
			temp->next=NULL;
			prv->next=temp;
	}
}
void traverse()
{
       // int value;
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			printf("%d\t",temp->info);
			temp=temp->next;
		}
	}
}
void insert_at_beginning()
{
	int value;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter value to insert: ");
	scanf("%d",&value);
	temp->info=value;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->next=start;
		start=temp;
	}
}
void insert_at_end()
{
	//struct *newnode;
	int value;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter value to insert");
	scanf("%d",&value);
	newnode->info=value;
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void insert_at_given_location()
{
	int value,c,loc;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter value to insert");
	scanf("%d",&value);
	newnode->info=value;
	newnode->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp=start;
		c=1;
		printf("enter location where you want to insert:");
		scanf("%d",&loc);
		while(temp!=NULL && c!=loc)
		{
			prv=temp;
			temp=temp->next;
			c=c+1;
		}
	}
	if(temp==NULL)
	{
		printf("node is empty");
	}
	else
	{
		newnode->next=temp;
		prv->next=newnode;
	//	temp->next=newnode;
	//	prv->next=temp;
	}
}
void insert_after_a_node()
{
	int value,element;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter value to insert:");
	scanf("%d",&value);
	newnode->info=value;
	newnode->next=NULL;
	if(start==NULL)
	{
		printf("list is empty");
		//temp=start;
	}
	else
	{
		printf("enter the elemnt after which you want to insert:\n");
		scanf("%d",&element);
		temp=start;
		while(temp!=NULL && temp->info!=value)
		{
			temp=temp->next;
		}
		if(temp==NULL)
		{
			printf("node is not present");
		}
		else
		{
			newnode->next=temp->next;
			temp->next=newnode;
		}
	}
} 
void delete_at_beginning()
{
	int value;
	temp=(struct node*)malloc(sizeof(struct node));
//	printf("enter the value to delete");
//	scanf("%d",&value);
	temp->info=value;
	temp->next=NULL;
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		temp=start;
		start=start->next;
		free(temp);
	}
}
void delete_from_end()
{
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		temp=start;
	}
	while(temp->next!=NULL)
	{
		prv=temp;
		temp=temp->next;
	}
	prv->next=NULL;
	free(temp);
}
void delete_after_a_node()
{
	int value;
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		printf("enter the value you want to delete");
		scanf("%d",&value);
		temp=start;
	}
	if(temp==NULL)
	{
		printf("node is not present");
	}
	else
	{
		prv=temp->next;
		temp->next=prv->next;
//		free(prv);
	}
	free(prv);
}
void delete_at_given_location()
{
	int loc,c=1;
	if(start==NULL);
	{
		printf("list is empty");
	}
	else
	{
		printf("enter location from where you want to delete:");
		scanf("%d",&loc);
		temp=start;
		if(loc==1)
		{
			start=start->next;
			free(temp);
		}
		else
		{
			while(temp->next!=NULL && c!=loc)
			{
				prv=temp;
				temp=temp->next;
				c=c+1;
			}
			if(temp==NULL && c!=loc)
			{
				printf("node is not present");
			}
			else
			{
				prv->next=temp->next;
				free(temp);
			}
		}
	}
}











