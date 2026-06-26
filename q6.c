#include<stdio.h>
int main (){

  float r,p ,t,SI;
  printf("enter p:\n");
scanf("%f",&p);

printf("enter r:\n");
scanf("%f",&r);

printf("enter t:\n");
scanf("%f",&t);

SI= (p * r * t) / 100;
printf("Simple Interest is %.2f", SI);

return 0;

}