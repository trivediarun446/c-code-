// write a c program to add the digit .
#include<stdio.h>
void sumdigit(int);
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    sumdigit(n);
    return 0;
 }
 void sumdigit(int i){
    int sum=0;
    while (i>0)
    {
       sum=sum+i%10;
       i=i/10;
    }
    printf("%d",sum);
    
 }