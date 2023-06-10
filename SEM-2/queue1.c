#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define size 3
void insert (int[],int);
int delete(int[]);
bool isFull();
bool isEmpty();
void display(int[]);
int rear=-1,front=-1;
int main()
{
int choice,queue[50],num;
while(1)
{
printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
printf("ENTER YOUR CHOICE");
scanf("%d",&choice);
switch(choice)
{
 case 1:
printf("ENTER THE NUMBER TO INSERT");
scanf("%d",&num);
 insert(queue,num);
 break;
case 2:
delete(queue);
 break;
case 3:
 display(queue);
 break;
case 4:
exit(0);
break;
}
}
}
bool isFull()
{
if(rear==size-1)
{
return true;
}
else
{
return false;
}
}
void insert(int queue[],int num)
{
if(isFull()==true)
{
printf("QUEUE OVERFLOW\n");
}
else
{
if(rear==-1)
{
rear=rear+1;
front=front+1;
}
else
{
rear=rear+1;
}
queue[rear]=num;
}
}
bool isEmpty()
{
if(front==-1 || front==rear+1)
{
return true;
}
else
{
return false;
}
}
int delete(int queue[])
{
if(isEmpty()== true)
{
printf("QUEUE UNDERFLOW\n");
}
else
{
printf("DELETED VALUE=%d\n",queue[front]);
front=front+1;
}
}
void display(int queue[])
{
int temp;
if(front==-1 || front==rear+1)
{
printf("QUEUE UNDERFLOW\n");
}
else
{
temp=front;
while(temp<=rear)
{
printf("VALUES ARE %d\n",queue[temp]);
temp++;
}
}
}
