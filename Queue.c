#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 100

//declaring function globally
void enQueue();
void deQueue();
void display();

int Queue[max], front = -1, rear = -1;
int i,value;
int main(){
    int choice;    
    do{
        printf("\n1. EnQueue \n2. DeQueue \n3. Display\n4. Exit\nEnter Your Choice : ");
    scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            enQueue();
            display();
            break;
        case 2:
            deQueue();
            display();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong selection ! \n");
            break;
        }
    }while(choice!=4);
    return 0;    
}
void enQueue(){
	int data;
	if(rear == max-1){
		printf("Queue is full!!");
	}else{
		printf("Enter data to enQueue : ");
		scanf("%d",&data);
        if(front == -1){
            front = 0;
        }
        rear++;
        Queue[rear] = data;
    }
}
void deQueue(){
    if(front == -1){
        printf("Queue is empty !!\n");
    }else{
        printf("Deleted : %d\n",Queue[front]);
        front++;
        if(front>rear){
            front = rear = -1;
        }
    }
}
void display(){
    if(rear == -1){
        printf("Queue is Empty !!! \n");
    }else{
        int i;
        printf("Queue elements : ");
        for(i = front; i<= rear; i++){
            printf("%d\t", Queue[i]);
        }
    }
}
