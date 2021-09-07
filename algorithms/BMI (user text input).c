#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

  printf("enter your mass:");
  float mass;
  scanf("%f",&mass);
  printf("enter your height:");
  float height;
  scanf("%f",&height);
  printf("your BMI will be %f",mass/pow(height,2));


}
