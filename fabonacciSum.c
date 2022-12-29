#include<stdio.h>
int main(){
	int n,i,a=0,b=1,sum;
	sum= a+b;
	printf("Enter a number : \n");
	scanf("%d",&n);
	printf("Fibonacci Series is : \n");
	for(i=0;i<=n;i++){
		printf("%d ",sum);
		a=b;
		b=sum;
		sum = a + b;
	}
	printf("\nSum of fibonacci series is %d.",sum);
}
