#include<stdio.h>
int main(){
	int a[100], n, i, pos;
	printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d the elements of the array: ",n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the position where to delete the element(1-%d): ",n);
    scanf("%d", &pos);
    pos--;
    if (pos<0 || pos>=n) {
        printf("Invalid position\n");
        return 1;
    }
    for (i=pos; i<n-1; i++){
    	a[i] = a[i+1];
	}
	n--;
	
	printf("Array after deletion: \n");
	for (i=0; i<n; i++){
		printf(" %d ", a[i]);
	}
	printf("\n");
	return 0;
}