#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter a base : ");
    scanf("%d",&a);
    printf("Enter a power : ");
    scanf("%d",&b);
    int p = 1;
    for (int i = 1; i <= b; i++)
    {
        p = p * a;
    }
    printf("The %d power %d : %d",a,b,p);
    return 0;
}
