#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n]; // Declare an array of size n
    int *ptr;   // Declare a pointer to iterate through the array

    // Input the elements from the user and store them in the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    ptr = arr;     // Assign the address of the first element to the pointer

    // Print the elements using pointers
    for (int i = 0; i < n; i++) {

        printf("%d ",*(ptr+i)); // Print the value at the address pointed by ptr

        // Move the pointer to point to the next element
        
        
    }
    printf("\n");

    return 0;
}
