#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int p = 1;
    for (int  i = 1; i <= n; i++)
    {
        p = p * i;
        printf("\nThe factorial of %d : %d",i,p);
    }
    
    

    return 0;
}
