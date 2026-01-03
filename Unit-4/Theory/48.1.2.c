void swap(int *firstPointer, int *secondPointer) {
	// Write the code to swap
	int temp = *firstPointer;
	*firstPointer = *secondPointer;
	*secondPointer = temp;
	printf("In swap : *firstPointer = %d *secondPointer = %d\n", *firstPointer, *secondPointer);
}