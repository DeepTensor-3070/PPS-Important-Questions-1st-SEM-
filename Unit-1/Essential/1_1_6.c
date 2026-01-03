// Laasya recently bought a new volleyball from the sports shop. The ball appears to be medium-sized, and she is curious about its volume. Fortunately, she managed to measure the radius 
//  of the ball accurately. Now, she wants to calculate the volume 
//  of the spherical ball based on the radius. As a friend, you decide to help her find the volume using the mathematical formula for the volume of a sphere. Your task is to compute the volume of the volleyball and display the result.



// The volume of a sphere can be calculated using the formula:

#include <stdio.h>

int main() {
    float radius, volume;
    const float pi = 3.14;

    // Read the radius of the ball
    scanf("%f",&radius);
    // Calculate the volume of the sphere
	volume = (4.0/3.0)*pi*(radius*radius*radius);

    // Print the volume with 6 decimal places
    printf("%.6f\n", volume);

    return 0;
}
