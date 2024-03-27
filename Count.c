#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int count = 0;
    while (n!=0)
    {
        n/=10;
        count++;
    }
    printf("The number of digits are %d",count);
    
    return 0;
}
