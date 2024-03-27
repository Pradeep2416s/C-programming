#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int p = 1;
    /*int a = n;
    while(n>0)
    {
        p = p * n;
        n--;
    }
    n = a;
    printf("The Factorial of %d is %d",n,p);*/

    for (int  i = 1; i <= n; i++)
    {
        p = p * i;

    }
    
    printf("The factorial : %d",p);

    return 0;
}
