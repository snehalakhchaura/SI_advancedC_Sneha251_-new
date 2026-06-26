#include<stdio.h>
int main (){

  float F,C,t;
  printf("enter temp in faherhite:\n");
scanf("%f",&F);

C = (F - 32) *5 / 9;
printf("temp in celcius is %f\n",C );

printf("enter temp in celcius:\n");
scanf("%f",&C);

F= (C * 9 / 5) + 32;
printf("temp in faherheit is %f",F);

return 0;

}