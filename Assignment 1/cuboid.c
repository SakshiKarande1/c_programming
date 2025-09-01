#include<stdio.h>
int main()
{
     float l,b,h,v,sa;
     printf("Enter length,breadth and height:");
     scanf("%f%f%f",&l,&b,&h);
     v=l*b*h;
     sa=2*((l*b)+(l*h)+(b*h));
     printf("Volume of Cuboid:%f",v);
     printf("\nSurface Area of Cuboid:%f",sa);
     return 0;
     
}