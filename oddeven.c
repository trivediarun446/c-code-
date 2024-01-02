#include <stdio.h>
int num(int n);
int main(int argc, char const *argv[])
{
    int n;

    printf("enter the number\n");
    scanf("%d", &n);

    num (n);
     return 0;
}
int num(int n)
{
    if (n % 2 == 0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
    
}
