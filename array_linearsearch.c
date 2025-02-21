//#include<stdio.h>
//
//int lin_search(int a[], int n, int key){
//	for(int i=0; i<n; i++){
//		if (a[i]==key);{
//			return i;
//		}
//		
//	}
//	return -1;
//}
//int main(){
//	int key , n;
//	printf("enter number of elements: ");
//	scanf("%d", &n);
//	int a[n];
//	
//	printf("enter %d elements:\n",n);
//	for(int i = 0; i < n; i++){
//        scanf("%d", &a[i]);
//    }
//    
//    printf("enter element to search: ");
//    scanf("%d", &key);
//	
//	int result= lin_search(a,n,key);
//	if (result != -1){
//		printf("element %d found at index %d\n ",key,result);
//	}
//	else{
//		printf("element %d not found in array\n", key);
//	}
//	return 0;
//}



#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return index if element is found
        }
    }
    return -1;  // Return -1 if element is not found
}

int main() {
    int n, key;

    // Taking input for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size 'n'

    // Taking input for array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Store values correctly
    }

    // Taking input for the search key
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Call linear search function
    int result = linearSearch(arr, n, key);

    // Print the result
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}