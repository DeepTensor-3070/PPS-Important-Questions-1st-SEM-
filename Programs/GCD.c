#include <stdio.h>

int gcd(int a,int b){
    while (a>0 && b>0)
    {
        if (a>b)
        {
            a=a%b;
        }
        else b = b%a;    
    }
    if (a==0)
    {
        return b;
    }
    else return a;
       
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("GCD: %d",gcd(a,b));
    printf("LCM: %d",a*b/(gcd(a,b)));
    return 0;
}