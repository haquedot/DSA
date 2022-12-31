#include<stdio.h>
#define max 100
void push();
void pop();
void display();
void peek();
struct stack{
	int top;
	int arr[max];
}s;
void main(){
	int x;
	s.top = -1;
	do{
		printf("\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n");
		printf("Choose Option : ");
		scanf("%d",&x);
		switch(x){
			case 1:
				push();
				display();
				break;
			case 2:
				pop();
				display();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			case 5:
				break;
		}
	}while(x!=5);
}
void push(){
	int data;
	if(s.top == max-1){
		printf("Stack Overflow!!");
	}
	else{
		printf("Enter the element to be pushed : ");
		scanf("%d",&data);
		s.top++;
		s.arr[s.top] = data;
	}
}
void pop(){
	int data;
	if(s.top == -1){
		printf("Stack Underflow!!\n");
	}
	else{
		data = s.arr[s.top];
		s.top--;
		printf("Popped Element is %d\n",data);
	}
}
void display(){
	int i=0;
	if(s.top == -1){
		printf("Stack Underflow!!");
	}else{
		printf("Elements are : ");
		for(i=0;i<=s.top;i++){
			printf("%d\t",s.arr[i]);
		}
	}
}
void peek(){
	if(s.top == -1){
		printf("Stack Underflow!!");
	}else{
		printf("Peek Element is %d",s.arr[s.top]);
	}
}
