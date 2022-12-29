#include<stdio.h>

int main(){
	int fact=1,i,num;
	printf("Enter a number : \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact*=i;
	}
	printf("Factor of %d is %d",num,fact);
}
