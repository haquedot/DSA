#include<stdio.h>
#include <stdlib.h>
#define max 100

void deletion();
void deletionEnd();
void deletionBegin();
void deletionLoc();
void display();

struct array{
	int ub;
	int lb;
	int a[max];
	int size;
}a;
void main(){
	int choice,i;	
	a.lb = -1;
	printf("Enter size of Array : ");
	scanf("%d",&a.size);
	printf("Enter Elements : \n");
	for(i=0;i<a.size;i++){
		scanf("%d",&a.a[i]);
	}
	a.ub = a.size-1;
	display();
	deletion();
}
void deletion(){
	int choice,d;
	do{
		printf("\n1. Delete at the End\n2. Delete at the Begin\n3. Delete at the Location\n4. Display\n5. Exit\n ");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				deletionEnd();
				display();
				break;
			case 2:
				deletionBegin();
				display();
				break;
			case 3:
				deletionLoc();
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
void deletionEnd(){
	int data;
	if(a.ub == a.lb){
		printf("Array is Underflow!!");
	}else{
		printf("Deleted Element : %d\n",a.a[a.ub]);
		a.ub--;
	}
}
void deletionBegin(){
	int data,i;
	if(a.ub == a.lb){
		printf("Array is Underflow!!");
	}else{
		printf("Deleted Element : %d\n",a.a[0]);
		for(i=0;i<a.ub;i++){
			a.a[i] = a.a[i+1];
		}
		a.ub--;
	}
}
void deletionLoc(){
	int data,loc,i;
	if(a.ub == a.lb){
		printf("Array is Underflow!!");
	}else{
		printf("Enter position : ");
		scanf("%d",&loc);
		printf("Deleted Element : %d\n",a.a[loc-1]);

		for(i=loc-1;i<a.ub;i++){
			a.a[i] = a.a[i+1];
		}
		a.ub--;
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

