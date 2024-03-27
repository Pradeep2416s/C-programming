#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i%2==0)
            a = a - i;
        else
            a = a + i;
    }

    printf("The Sum of Series : %d",a);
    
    return 0;
}
