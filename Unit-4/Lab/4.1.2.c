#include <stdio.h>

// Recursive function to find the largest number
int findLargest(int arr[], int n) {
    //base case
    if(n == 1) return arr[0] ;
    // Recursively find the largest in the rest of the array
	int largest = findLargest(arr,n-1);
    // Compare and return the largest
	if(arr[n-1]>largest) return arr[n-1];
    return largest;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", findLargest(arr, n));
    return 0;
}