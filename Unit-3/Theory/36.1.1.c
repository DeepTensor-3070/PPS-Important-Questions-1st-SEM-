#include <stdio.h>

// Fill the missing code...
int GCD(int a,int b) {
    if (a%b == 0) {
        return b;
    } else {
        return GCD(b,a%b);
    }
}

int main() {
    // write your code here
    int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",GCD(a,b));
	
}
