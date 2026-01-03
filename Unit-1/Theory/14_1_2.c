#include <stdio.h>
void main() {
	float x, y;
	x = 7 / 5;
	y = (float) 7 / 5; // Convert the int value explicitly into float
	printf("x = %f, y = %f\n", x, y);
}