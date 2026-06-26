#include <stdio.h>
int main () {

  float area,cir,r;
  printf("enter radius of circle :");
  scanf("%f",&r);  
  
  cir=2*3.14*r;
  printf("cirumference of circle is %f\n",cir);

  area=3.14*r*r;
  printf("area of circle is %f",area);

  return 0;
}
