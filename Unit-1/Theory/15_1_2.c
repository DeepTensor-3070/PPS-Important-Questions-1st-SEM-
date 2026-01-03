// Nancy bought apples from a fruit shop, where the shopkeeper specified the bill amount. Nancy provided some money to the shopkeeper to pay the bill. Now, she would like to know the quotient and remainder after dividing the amount she gave by the bill amount specified by the shopkeeper. Can you help Nancy in finding it?



// Constraint :

// 5 ≤ amount_given≤ 2500 

// 5 ≤ bill_amount ≤ 2500



// Input Format:

// The first line of the input consists of an integer representing the amount given by Nancy

// The second line of the input consists of an integer representing the amount specified by the shopkeeper



// Output Format:

// The first line of the output represents the quotient in integer format

// The second line of the output represents the remainder in integer format

#include <stdio.h>
void main(){
	int nancy;
	scanf("%d",&nancy);
	int shop;
	scanf("%d",&shop);
	int a = nancy/shop;
	int b = nancy%shop;
	printf("%d\n",a);
	printf("%d",b);
	
}