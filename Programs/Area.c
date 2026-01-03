// Area of circle , triangle & Reactangle

#include <stdio.h>
int main(){
    // Circle
    float r;
    scanf("%f",&r);
    printf("Area of Circle: %f",3.14*r*r);
    // Triangle
    int h,b;
    scanf("%d %d",&h,&b);
    float ans = 0.5*(h*b);
    printf("Area of Triangle: %f",ans);
    // Reactangle
    int l,x;
    scanf("%d %d",&l,&x);
    printf("Area of Reactangle: %d",l*x);
    return 0;
}