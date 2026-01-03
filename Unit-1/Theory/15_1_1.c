// Tina's brother gave her a fun task of calculating the total number of squares in an n×n board, where each square has dimensions of 1cm x 1cm. This task includes counting all possible squares on the board, both small and large. Help Tina determine the total number of squares on the board, considering all possible square sizes.

// Constraints:

// 2 ≤ n ≤ 20


// Input Format:

// The only line of the input represents a value of n.


// Output Format:

// Print the number of squares in the n*n board.


// Hint: The formula for finding the total number of squares on the n * n board is:

// (n * (n + 1) * (2 * n + 1)) / 6

#include <stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int result = (n*(n+1)*(2*n+1))/6;
	printf("%d",result);
}