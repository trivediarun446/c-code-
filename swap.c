// I am not getting this output 

#include <stdio.h>
int swap(int, int);
int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter the two numbers\n");
    scanf("%d %d", &a, &b);
    
    printf("Before swaping\n");
    printf("%d %d\n",a,b);
     
    swap(a,b);
        return 0;
}
int swap(int p,int q)
{
    int c;
    c=p;
    p=q;
    q=c;
  printf(" %d %d", p,q);
}
