#include <stdio.h>
#include <stdlib.h>

int main()
{
    char message[50];
    int key;
    printf("enter the message:");
    gets(message);
    printf("enter the key:");
    scanf("%d",&key);

    for(int i=0;i<strlen(message);i++){
        printf("%c",message[i]=message[i]+key);
    }
    printf("\n%s\n",message);
    for(int i=0;i<strlen(message);i++){
        printf("%c",message[i]=message[i]-key);
    }


}
