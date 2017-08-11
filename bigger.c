#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && c<a)
    printf("a");
    if(c>a && b<c)
    printf("c");
    if(b>a && b>c)
    printf("b");
    return (0);
}
