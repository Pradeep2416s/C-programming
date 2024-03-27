#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    float a = 100;
    for(int i=0;i<n;i++)
    {
        printf("%f ",a);
        a/=2;
    }
    return 0;
}
