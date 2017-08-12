#include<stdio.h>
int main()
{
    int i,d;
    scanf("%d",&i);
    d=i%4;
    if(d==0)
    printf("leap year");
    else
    printf("not a leap year");
}
