#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = n;
    int p = 1;
    int sum = 0;
    for (int i = 1; i <= 500; i++)
    {
        int Ld = n%10;
        for (int j = 1; j <= 3; j++)
        {
            p = p * Ld;
        }
        sum = sum + p;
        p = 1;
        n/=10;
    }
    if (a==sum)
        printf("%d is Armstrong numbre",a);
    
    else
        printf("%d is not a Armstrong number",a);
    

    return 0;
}
