#include<stdio.h>
#include<stdlib.h> 
struct array
{
	int *arr;
	int size; 
	int ub;
	int lb;
};
int isFull(struct array *a)
{
if(a->ub==a->size)
{
printf("the array is overflow\n"); return 1;
}
else
{
return 0;
}
}
int isEmpty(struct array *a)
{

if(a->ub==a->lb)
{
printf("the array is underflow\n"); return 1;
}
else
{
return 0;
}
}
void insertion_at_beginning(struct array *a)
{
if(isFull(a))
{
printf("\narray is overflow so we cannot insert data\n");
}
else{
int data;
printf("enter the data which you want to insert:"); scanf("%d",&data);
a->ub++;
for(ii=a->ub;i>0;i--)
{
a->arr[i]=a->arr[i-1];
}
a->arr[0]=data;
}
}
void insertion_at_end(struct array *a)
{
if(isFull(a))
{
printf("array is overflow so we cannot insert data");
}


else{
int data;
printf("enter the data which you want to insert:"); scanf("%d",&data);
a->ub++;
a->arr[a->ub]=data;
}
}
void insertion_at_position(struct array *a)
{
if(isFull(a))
{
printf("array is overflow so we cannot insert data");
}
else{
int data;
printf("enter the data which you want to insert:"); scanf("%d",&data);
printf("enter the position which you want to insert the data:"); int position;
scanf("%d",&position); a->ub++;
for(int i=a->ub;i>position;i--)
{
a->arr[i]=a->arr[i-1];
}
a->arr[position]=data;
}
}
void display(struct array *a)
{
printf("\nthe updated array is: "); for(int i=0;i<=a->ub;i++)
{
printf("%d ",a->arr[i]);
}
}
int main()
{
struct array *a; a->ub=-1;
a->lb=-1; int choice;
printf("enter the size of the array:"); scanf("%d",&a->size);
a->arr=(int *)malloc(sizeof(int)*a->size); do{
printf("\n1.insertion at beggning\n2.insertion at end\n3.insertion at any index\n4.Display the array\n5.exit\n");
printf("\nenter the option:"); scanf("%d",&choice);


switch(choice)
{
case 1:
insertion_at_beginning(a); break;
case 2:
insertion_at_end(a); break;
case 3:
insertion_at_position(a); break;
case 4:
display(a); break;
case 5:
printf("\n!!we exit the program!!\n"); break;
default:
printf("\n!!please enter the right option!!\n"); break;
}
}while(choice!=5);
}
