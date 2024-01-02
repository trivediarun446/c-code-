//  Program for factorial by using function 
#include <stdio.h>
int fact(int);
int main(){
    int n ;
    printf("enter the number :");
    scanf("%d",&n);

    fact(n);
    return 0;
}
int fact(int x){
    int factorial=1;
   for(int i=x;i>1;i--){
    factorial=factorial*i;
   }
    printf("%d",factorial);
}