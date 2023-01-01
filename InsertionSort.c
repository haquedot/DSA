// C program for insertion sort
#include<math.h>
#include<stdio.h>

void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i<n; i++) 
    {
        key = arr[i];
        j = i - 1;
        while (j>= 0 && arr[j]>key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void display(int arr[], int n){
    int i;
        printf("Sorted array: ");
    for (i = 0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}

int main(){
    int arr[100], n,i;
    printf("Enter the number of element you want to Sort : ");
    scanf("%d", &n);
    printf("Now Enter the Element : \n");
    for(i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    } 
    insertionSort(arr, n);
    display(arr, n);
    return 0;
}
