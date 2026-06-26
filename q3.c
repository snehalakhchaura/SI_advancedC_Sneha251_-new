#include<stdio.h>
int main (){

  int temp,a,b;
  printf("enter a :");
scanf(" %d",&a);  

printf("enter b:");
scanf("%d",&b);

temp=a;
a=b;
b=temp;

printf("the values of a and b are swapped are %d %d" , a,b );

return 0;
}
