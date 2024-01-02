// write a c program to print reverse of input number 
#include <stdio.h>
int rev(int n);
int main(){
    int n ;
    printf("enter the number :");
    scanf("%d",&n);
    rev(n);
    return 0;
}
int rev(int i){
    int rev=0;
    while (i>0)
    {
        rev=rev*10+i%10;
        i=i/10;
    }
    printf("%d",rev);
}