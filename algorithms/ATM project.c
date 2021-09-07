#include <stdio.h>
#include <stdlib.h>
#define  PASSWORD 1996
int main()
{
   int balance=9000;
   while(1){
   int password;

   printf("enter your password:\n");
   scanf("%d",&password);
   if(password==password){
    printf("valid\n");
    int processnumber;
    printf("enter the process number:\n");
    printf("to check the balance press 1:\n");
    printf("to withdraw press 2:\n");
    printf("to deposit press 3:\n");
    scanf("%d",&processnumber);
    if (processnumber==1){printf("your balance is :%d\n",balance);}

    else if(processnumber==2){
        int withdraw;
        printf("enter how many pounds you want to withdraw:");
        scanf("%d",&withdraw);

        if(balance=balance-withdraw){
        printf("your process is done successfully you have now :%d\n",balance);}
        else {
            printf(" invalid operations");
        }
    }

    else if(processnumber==3){
      int depositnumber;
      printf("enter the amount of deposit:");
      scanf("%d",&depositnumber);
      balance=balance+depositnumber;
      printf("you've deposit %d and your balance now is %d\n",depositnumber,balance);
    }


   else{printf("invalid");}

   }




   }
    printf("Hello world!\n");
    return 0;
}
