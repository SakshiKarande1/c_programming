#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("\nNext char is %c",ch+1);
    printf("\nASCCI  value is %d",ch);
    return 0;
}