// Write a C program to determine whether a given year is a leap year or not using the conditional (ternary) operator.



// Input Format:

// The program should read a single integer representing the year.


// Output Format:

// The program should print whether the given year is a "Leap year" or "Not a leap year".

#include <stdio.h>

int main() {
    int year;
    scanf("%d",&year);

    const char *result = (year%4 == 0 && year%100 !=0)||(year%400==0) ? "Leap year": "Not a leap year";

    printf("%s",result);
    
    return 0;
}

