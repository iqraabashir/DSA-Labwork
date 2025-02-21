#include<stdio.h>
int main(){
    int a[100] ,n, pos, ele, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    pos--;
    if (pos<0 || pos>=n) {
        printf("Invalid position\n");
        return 0;
    }
    printf("Enter the element you want to insert: ");
    scanf("%d", &ele);
    for(i = n; i > pos; i--){
        a[i] = a[i-1];
    }
    a[pos] = ele;
    n++;
    printf("Array after insertion: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
    
}