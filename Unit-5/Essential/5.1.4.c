#include <stdio.h>
#include <math.h>
void main() {
	float a[10], *ptr, mean, std, sum = 0, sumstd = 0;
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%f", &a[i]);
	}
	ptr = a;
	for(i = 0;i<n;i++){
		sum += *(ptr+i);
	}
	mean = sum/n;
	for(i = 0;i<n;i++){
		sumstd += (*(ptr+i)-mean)*(*(ptr+i)-mean);
	}
	std = sqrt(sumstd/n);
	printf("%.2f\n",sum);
	printf("%.2f\n",mean);
	printf("%.2f\n",std);
	
}
