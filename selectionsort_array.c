//find smallest element
//swap it with first element
//move to next position
//repeat until the entire array is sorted




#include <stdio.h>

void selectionsort(int a[], int n){
	for(int i=0; i<n-1; i++){
		int min_idx = i; // assume first element is smallest
		
		for (int j=i+1; j<n; j++){    //find min in rem array
			if(a[j] < a[min_idx]){
				min_idx = j;          // update index of smallest ele
			}
		}
		
		if(min_idx != i){             // swap found min ele with 1st ele
			int temp = a[i];
			a[i] = a[min_idx];
			a[min_idx] = temp;
		}
	}
	
}
void print(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main(){
	int a[] = {64, 25, 12, 22, 11};
	int n= sizeof(a)/sizeof(a[0]);
	printf("unsorted array:\n ");
	print(a , n);
	
	selectionsort(a,n);
	
	printf("sorted array:\n ");
	print(a,n);
	
	return 0;
}