// write a c program to print a fibonacci series 
#include <stdio.h>
int fib(int );
int main(){
    int n ;
    printf("enter the number till tha fibonacci series will print");
    scanf("%d",&n);
    fib(n);
    return 0 ;

}
int fib(int i){
    int x=0;
    int y=1;
    int z=0;
    while(z<=i){
        printf("%d",z);
        x=y;
        y=z;
        z=x+y;
    }

}
 
