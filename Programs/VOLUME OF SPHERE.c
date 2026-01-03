// VOLUME OF SPHERE
#include <stdio.h>

int main() {
    float radius, volume;
    const float PI = 3.14159;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("Volume of the sphere = %.2f\n", volume);

    return 0;
}
