#include<stdio.h>
#include<math.h>
int main(){
    float a,b,am,hm;
    printf("Enter the value ofa and b:");
    scanf("%f%f",&a,&b);
    am=(a+b)/2;
    printf("Aruthmetuc Mean:%f",am);
    hm=a*b/(a+b);
    printf("\nHarmonic mean:%f",hm);
    return 0;
}