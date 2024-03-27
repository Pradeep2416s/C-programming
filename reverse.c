#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int r = 0;
    while (n>0)
    {
        int Ld = n%10;
        n/=10;
        r = r*10 + Ld;
        
    }

    printf("Tne Reverse number : %d",r);
    
    return 0;
}
