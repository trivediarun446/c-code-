#include <stdio.h>
float pi = 3.14 ;
float area( int );                      
int main(int argc, char const *argv[])
{
    int r ;

    printf("enter the radius of circle ");
    scanf("%d", &r);

    printf("%.2f", area(r));
 return 0;
} 

float area ( int r){
    return (pi*r*r);
}
 

