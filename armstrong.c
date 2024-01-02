// write a c program to print an armstrong number
#include <stdio.h>
int armstrong(int);
int main(){
   int n;
   printf("enter the number to check");
   scanf("%d",&n);

   armstrong(n);
   return 0;
}
int armstrong(int i){
    int x , sum=0;
    x=i;
    while(i>0){
        sum=sum+(i%10)*(i%10)*(i%10);
        i=i/10;
    }
 if(x==sum)
      printf("Armstrong");
  else 
      printf("not Armstrong");
}