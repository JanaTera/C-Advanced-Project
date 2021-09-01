#include <stdio.h>
#include <stdlib.h>
 void swap(int *x,int *y);
int main()
{
    int x=1;
    int y=2;

    printf("the value before swapping is:%d %d\n",x,y);
    swap(&x,&y);
    printf("the value after swapping function is: %d %d\n",x,y);
}
void swap(int *x,int *y){
int temp;
temp=*x;
*x=*y;
*y=temp;
}
