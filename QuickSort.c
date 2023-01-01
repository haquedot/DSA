// Quick sort in C
#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


int partition(int array[], int low, int high) 
{
    int pivot=array[low];
    int start=low;
    int end=high;
    
    while(start<end)
    {
        while(array[start]<=pivot)
        {
            start++;
        }
        while(array[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(&array[start],&array[end]);
        }
    }
    swap(&arr[low],&arr[end]);
    return end;
}

void quickSort(int arr[], int low, int high) 
{
    if (low<high) 
    {
    
        int pi = partition(array, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void display(int arr[], int size) 
{
	printf("Sorted array in ascending order: \n");
    for (int i = 0; i<size; ++i) 
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}


int main() {
  int arr[100], n,i;
    printf("Enter the no. of element you want to Sort. \n");
    scanf("%d", &n);
    printf("Now Enter the Element : \n");
    for(i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
  // perform quicksort on data
  quickSort(arr, 0, n - 1);
  display(arr, n);

  return 0;
}

