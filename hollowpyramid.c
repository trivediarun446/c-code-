// write a c programe to print hollow pyramid
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of element in c");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if(i==1||i==n||k==n-i){
            printf("*");
            }
        }
        printf("\n");
    }
}