#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 65; i <= 90; i++)
    {
        char ch = (char)i;
        printf("\n%d %c",i,ch);
    }
    
    return 0;
}
