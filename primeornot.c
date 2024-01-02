//  prime number or not    having some doubt
#include <stdio.h>
void checkprime(int);
int main(int argc, char const *argv[])
{
    int n;
    
    printf("enter the number for check ");
    scanf("%d", &n);

    checkprime(n);    
    return 0;
}
void checkprime(int n)
{
    int count=0;
    for (int x = 1; x <= n; x++)
    {  if (n % x == 0) {
        count++ ;
        }
    }
    if (count == 2)
       printf("prime");
    else
        printf("not prime");
}
