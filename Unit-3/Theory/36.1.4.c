#include <stdio.h>

void printArray(int arr[], int size, int index) {
    if(index == size){
		return;
	}
    // print the elements of the array recursively...
    printf("%d ",arr[index]);
    printArray(arr,size,index+1);
}

int main() {
    int size;
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid integer");
        return 1;
    }
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printArray(arr, size, 0);
    printf("\n");
    return 0;
}
