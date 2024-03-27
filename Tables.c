#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<11;i++)
        printf("\n%d * %d = %d",n,i,n*i);
    return 0;
}
