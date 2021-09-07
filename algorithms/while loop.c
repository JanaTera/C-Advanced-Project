#include <stdio.h>
#include <stdlib.h>

int main()
{
   int studengrade[5];
   for (int i=0;i<3;i++){
    printf("enter the student's %d grade:",i+1);
    scanf("%d",&studengrade[i]);

   }


   for(int i=0;i<5;i++){
        if(studengrade[i]==90){
    printf("the student who got 90 has an id of %d\n",i+1,studengrade[i]);

   }
   }



    /*
    int price;
    int number;
    int sum=0;
    printf("enter the number of items:");
    scanf("%d",&number);
    for(int i=0;i<number;i++){
    do{
        printf("enter the item's price %d:",i+1);
        scanf("%d",&price);
    }

    while(price<1);
    sum=sum+price;
    }
    printf("the total cost after the taxes will be %f:",sum+sum*0.14);

    int age;
    for(int i=0;i<5;i++){
        printf("enter the age of %d employee:",i+1);
    scanf("%d",&age);
    if(age<1){
        continue;
    }
    else{
        printf("accepted the number %d:\n",i+1);
    }
    }
    */
}
