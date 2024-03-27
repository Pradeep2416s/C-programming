#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a =1;
    for (int i=0;i<n;i++)
    {
        printf("%d ",a);
        a+=2;
    }
    
    
    return 0;
}
