#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int sum = 0;
    for (int i = 1; i <= n ; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("The Fibonacci : %d",sum);
    
    return 0;
}
