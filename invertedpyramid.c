// write a c programe to print inverted pyramid 
#include <stdio.h>
int main(){
    int n ;
    printf("enter the number of rows ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
           printf(" ");
        }
        for (int  k = 0; k < 2*(n-i)+1; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}