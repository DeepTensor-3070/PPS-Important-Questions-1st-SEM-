#include <stdio.h>
int GCD(int ,int );
int findLCM(int a, int b, int c) {
    
    // find the LCM (Least Common Multiple) of three numbers recursively
    int ab = (a*b)/GCD(a,b);
	return (ab*c)/GCD(ab,c);
    
}

int main() {
    int P1, P2, P3;
    scanf("%d %d %d", &P1, &P2, &P3);

    // Validate input
    if (P1 <= 0 || P2 <= 0 || P3 <= 0) {
        printf("Invalid input");
        return 1;
    }
    int lcm = findLCM(P1, P2, P3);
    printf("%d", lcm);

    return 0;
}
int GCD(int a,int b){
	if(a%b == 0) return b;
	else{
		return GCD(b,a%b);
	}
}