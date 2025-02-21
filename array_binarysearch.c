#include<stdio.h>

int binarySearch(int a[], int left, int right, int key){
	while(left<= right){
		int mid = left + (right - left) / 2;
		if(a[mid]== key){
				return mid;
		}
		if(a[mid] < key){
				left = mid+1;
		}
		else{
				right = mid-1;
		}
			
		}
	return -1;
	}
	
int main(){
	int n, key;

    // Taking input for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];  // Declare array of size 'n'

    // Taking input for array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);  // Store values correctly
    }

    // Taking input for the search key
    printf("Enter the element to search: ");
    scanf("%d", &key);

    
    int result = binarySearch(a, 0,n-1, key);

    // Print the result
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}


