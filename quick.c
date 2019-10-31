#include<stdio.h>
#define size 10


int partition(int arr[],int left,int right) 
{ 
	int pivot=arr[right]; 
	int i=(left - 1); 
	for (int j=left;j<right;j++) 
	{ 
		if (arr[j]<pivot) 
		{ 
			i++; 
			int temp = arr[i]; 
			arr[i] = arr[j]; 
			arr[j] = temp; 
		} 
	} 

	int temp1=arr[i+1]; 
	arr[i+1]=arr[right]; 
	arr[right]=temp1; 
	return i+1; 
} 

void quicksort(int arr[], int left, int right) 
{ 
	if (left < right) 
	{ 	
		int x=partition(arr, left, right); 
		quicksort(arr, left, x-1); 
		quicksort(arr, x+1, right); 
	} 
} 

void display(int arr[], int n) 
{ 
	for (int i=0;i<n;++i) 
		printf("%d ",arr[i]);
}

void main() 
{
 int arr[size];
 int n;
 printf("Enter no elements of array :");
 scanf("%d",&n);
 printf("Enter elements of the array :");
 for(int i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 quicksort(arr, 0, n-1); 
 printf("sorted array "); 
 display(arr, n);
}


