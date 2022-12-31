#include<stdio.h>
#include <stdlib.h>
#define max 100

void insertion();
void insertionEnd();
void insertionBegin();
void insertionLoc();
void display();

struct array{
	int ub;
	int lb;
	int a[max];
	int size;
}a;
void main(){
	int choice;	
	a.lb = -1;
	a.ub = -1;
	printf("Enter the size of Array : ");
	scanf("%d",&a.size);
	insertion();
}
void insertion(){
	int choice,d;
	do{
		printf("\n1. Insert at the End\n2. Insert at the Begin\n3. Insert at the Location\n4. Display\n5. Exit\n ");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				insertionEnd();
				display();
				break;
			case 2:
				insertionBegin();
				display();
				break;
			case 3:
				insertionLoc();
				display();
				break;
			case 4:
				display();
				break;
			case 5: 
				exit(0);
			default:
				printf("Wrong choice!!!");
				break;
		}
	}while(choice!=5);
}
void insertionEnd(){
	int data;
	if(a.ub >= a.size){
		printf("Array is Overflow!!");
	}else{
		printf("Enter element to be inserted : ");
		scanf("%d",&data);
		a.ub++;
		a.a[a.ub] = data;
	}
}
void insertionBegin(){
	int data,i;
	if(a.ub >= a.size){
		printf("Array is Overflow!!");
	}else{
		printf("Enter element to be inserted : ");
		scanf("%d",&data);
		a.ub++;
		for(i=0;i<=a.ub;i++){
			a.a[i+1] = a.a[i];
		}
		a.a[0] = data;
	}
}
void insertionLoc(){
	int data,loc,i;
	if(a.ub >= a.size){
		printf("Array is Overflow!!");
	}else{
		printf("Enter element to be inserted : ");
		scanf("%d",&data);
		printf("Enter position : ");
		scanf("%d",&loc);
		a.ub++;
		for(i=loc;i<=a.ub;i++){
			a.a[i+1] = a.a[i];
		}
		a.a[loc] = data;
	}
}
void display(){
	int i;
	if(a.ub == -1){
		printf("No Elements!!");
	}else{
		printf("Array Elements : ");
		for(i=0;i<=a.ub;i++){
			printf("%d\t",a.a[i]);
		}
	}
}

