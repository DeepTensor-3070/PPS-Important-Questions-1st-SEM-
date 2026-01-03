#include <stdio.h>

// Write your code for the function to print spaces
void printspace(int c){
	if(c == 0) return;
	printf(" ");
	printspace(c-1);
}

// Recursive function to print the pyramid pattern 
void printstar(int c){
	if(c == 0) return;
	printf("*");
	printstar(c-1);
}
void printPyramid(int numRows, int currentRow) {

    if(currentRow>numRows) return;
	printspace(numRows-currentRow);
	printstar(2*currentRow-1);
	printf("\n");
    printPyramid(numRows,currentRow+1);

}

int main() {
    int numLevels;
    scanf("%d", &numLevels);
    if (numLevels <= 0 || numLevels > 20) {
        printf("Invalid rows\n");
        return 1;
    }

    // generate and display the pyramid pattern
    printPyramid(numLevels, 1);
    return 0;
}
