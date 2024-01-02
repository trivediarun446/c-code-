#include <stdio.h>

int sum(int  , int  );              /*fuction declaration*/
int main(int argc, char const *argv[])
{
    int a , b , c ;
    printf("enter the two number");
    scanf("%d %d",&a , &b);
    printf("%d ", sum(a ,b));  /*function call */
    
    int x=10 , y=15 ;
    printf("%d " ,sum(x,y));

    return 0 ;
}
    // fuction definition
     
    int sum(int a , int b)
    {
      return(a+b);
    }
    