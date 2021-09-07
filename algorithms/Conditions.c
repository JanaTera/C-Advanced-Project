#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sad;
   int love;
   printf("enter number of sadness:");
   scanf("%d",&sad);
   printf("enter number of love:");
   scanf("%d",&love);
   if(sad>love){
    printf("this post sad");
   }
   else if(sad==love){
    printf("complicated feelings");
   }

   else{
    printf("this post describes love");
   }


    return 0;
}
