#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[10][10];
    int total = N * N;


    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }


    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%d ", A[N - 1 - j][i]);
        }
    }

    return 0;
}

