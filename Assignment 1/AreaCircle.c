#include<stdio.h>
#include<math.h>
int main(){
    float area,radius,circum,pie=3.14;
    printf("Enter radius:");
    scanf("%f",&radius);
    area=pie*radius*radius;
    circum=2*pie*radius;
    printf("Area of circle is:%f",area);
    printf("Circumferece of circle is:%f",circum);
    return 0;

}