#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("enter the array size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
    printf("enter the element %d:",i+1);
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
    /*Bubble Sort*/
    for(int i=0;i<size;i++){
        for (int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }

for(int i=0;i<size;i++)
printf("%d,",arr[i]);
   /*Bubble Sort*/
}
