 #include<stdio.h>
int partition(int [],int, int);
void quickSort(int [], int, int);
void display(int [], int);
void swap(int [], int, int);

void swap(int arr[], int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
}
 void quickSort(int arr[], int low, int high){
        // code here
    if(low < high){	
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
	}
}
    
int partition (int arr[], int low, int high){
        int pivot = arr[high];
        int i = low - 1;
        int j = low;
        for(j = low;j<high;j++){
            if(arr[j] < pivot){
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i+1, high);
        return i+1;
       // Your code here
}

void display(int arr[], int n){
	int i;
	printf("Sorted Array : ");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
int main(){
	int i,n, arr[n];
	printf("Enter number of Elements : ");
	scanf("%d",&n);
	printf("Enter Elements : \n");
	for(i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	quickSort(arr, 0, n-1);
	display(arr, n);
	return 0;
}

