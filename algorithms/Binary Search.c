#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int size;
  printf("Enter the size of the array:");
  scanf("%d",&size);
  int arr[size] ;
  for(int i=0;i<size;i++){
    printf("Enter the item number %d:",i+1);
    scanf("%d",&arr[i]);
  }

  for (int i=0;i<size;i++){
    printf("%d",arr[i]);
  }
  /*THe part of the binary search!*/
  int first=0;
  int last=size-1;
  int mid;
  int search=5;
  //The last must be greater
  while (first<=last){
        mid=(first+last)/2;
    if(arr[mid]==search){
        printf("found at location %d",mid);
        break;
    }
    if(arr[mid]<search){
        first=mid+1;
    }
    else{
        last=mid-1;
    }
    /*The part of binary search*/
  }










}
