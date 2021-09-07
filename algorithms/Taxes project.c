#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  pseducode of calculating taxes
  1-ask for the price
  2-store the price in a variable
  3-put the taxes (14%) in a constant variable
  4- mult the price by 1.14
  5- print the final price after the taxes
  */

   float price;
    const float taxes=1.14;

    printf("enter the price:\a\n");
    scanf("%f",&price);
    printf("The price after the taxes will be %f\n",price*taxes);
    return 0;
}
