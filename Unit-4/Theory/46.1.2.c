#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
	}
    K = K % N;
    for (int i = 0; i < N; i++) {
        int index = (i + N - K) % N;
        printf("%d ", arr[index]);
    }

    return 0;
}

