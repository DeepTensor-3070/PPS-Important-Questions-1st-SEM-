#include <stdio.h>
void main() {
	int i , intsum;
	printf("i = ");
	// read value of i
	scanf("%d\n",&i);
	char ch = 'a'; // assing character 'a' to ch
	float floatsum;
	intsum = (int)i + ch; // add values of i and ch
	floatsum = (float)i + ch; // add values i and ch
	printf("Integer result = %d, Float result = %f\n", intsum,floatsum); // print intsum and floatsum values and observe the output
}