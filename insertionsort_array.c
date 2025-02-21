#include <stdio.h>
void insertionsort( int a[], int n){
	for(int i=1; i<n; i++){
		int key = a[i];
		int j = i-1;
		//  Move elements of a[0..i-1], that are greater than key, to one position
		while(j>=0 && a[j]>key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}
void print(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(){
	int a[] = {63, 12, 85 ,45 ,1};
	int n = sizeof(a)/sizeof(a[0]);
	
	printf("unsorted array:\n ");
	print(a , n);
	
	insertionsort(a,n);
	
	printf("sorted array:\n ");
	print(a,n);
	
	return 0;
}