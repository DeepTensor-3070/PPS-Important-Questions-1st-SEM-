#include <stdio.h>
#include <math.h>


void read1(float *a, int n);
void sort(float *a, int n);
float findSum(float *a, int n);
float findMean(float sum, int n);
float findStandardDeviation(float *a, int n, float mean);

int main()
{
    int n;
    float arr[100], sum, mean, sd;

    printf("Enter n value : ");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);
    read1(arr, n);

    sort(arr, n);

    sum = findSum(arr, n);
    mean = findMean(sum, n);
    sd = findStandardDeviation(arr, n, mean);

    printf("Sum = %f\n", sum);
    printf("Mean = %f\n", mean);
    printf("Standard deviation = %f\n", sd);

    return 0;
}

void read1(float *a, int n)
{
    for (int i = 0; i < n; i++)
        scanf("%f", (a + i));
}

void sort(float *a, int n)
{
    float temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (*(a + j) > *(a + j + 1))
            {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
}


float findSum(float *a, int n)
{
    float sum = 0.0;
    for (int i = 0; i < n; i++)
        sum += *(a + i);
    return sum;
}

float findMean(float sum, int n)
{
    return sum / n;
}

float findStandardDeviation(float *a, int n, float mean)
{
    float variance = 0.0;
    for (int i = 0; i < n; i++)
        variance += pow(*(a + i) - mean, 2);

    return sqrtf(variance / n);
}

