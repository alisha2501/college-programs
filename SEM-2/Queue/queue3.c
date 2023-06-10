#include<stdio.h>
#include<stdlib.h>

#define max 5

int queue[max],front=-1,rear=-1;

void insert(){
	int value;
    	if((rear==max-1 && front==0)||(front==rear+1)){
       		printf("\t\tqueue overflow!!.\n");
    	}
    	else{
        	printf("enter value to insert:");
        	scanf("%d",&value);
        	if(rear==(-1)){
            		front++;
            		rear++;
        	}
        	else if(rear==max-1){
            		rear=0;
        	}
        	else{
            		rear++;
        	}
        	queue[rear]=value;
    	}
}

void delete(){
	if(front==-1 && rear ==-1){
        	printf("\t\tqueue underflow!!.\n");
    	}
    	else{
        	printf("deleted value is:%d\n",queue[front]);
        	if(front==max){
            		front=0;
        	}
        	else if(rear==front){
            		rear=-1;
            		front=-1;
        	}
        	else{
            		front++;
        	}
    	}	
}
void display(){
	int temp;
	if((front== -1) && (rear== -1)){
        	printf("\t\tstack is empty.\n");
    	}

    	else{
       		temp=front;
        	if(rear>=front){
            		while(temp<=rear){
                		printf("%d ",queue[temp++]);
            		}
        	}
        	else{
            		while(temp<max){
                		printf("%d ",queue[temp++]);
            		}

            		temp=0;

          		while(temp<=rear){
                		printf("%d ",queue[temp++]);
            		}
        	}    
    	}
    	printf("\n");
}

int main(){
    int value,i,j,choice;
    printf("Queue Operations\n");
	while(1)
	{
		printf("--------------------------\n");
		printf("    1  -----> INSERT        \n");
		printf("    2  -----> DELETE         \n");
		printf("    3  -----> DISPLAY     \n");
		printf("    4  -----> EXIT        \n");
		printf("--------------------------\n");

		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
        }
	}   
}
