#include <stdio.h>
#include <stdlib.h>
int recursion(int i);
int main()
{
    recursion(10);
}

int recursion(int i){
if (i>=0){
    printf("%d\n",i);
    //printf("%d\n",i);

}

   return recursion(i-1);
}


