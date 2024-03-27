#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    while (n!=0)
    {
        int Ld = n%10;
        n/=10;
        if (Ld%2!=0)
        {
            sum = sum + Ld;
        }
        
    }
    
    printf("The Sum of odd digits : %d",sum);

    return 0;
}
