#include <stdio.h>
#include <stdlib.h>


void swap(int max,int min);
 void janaencryption();
 void search(int x[],int size, int value);
int main()
{
int grades[={90,30,20,50,70]

}



int add(int x,int y){
return x+y;
}


float bmi(float height,float weight){
return weight/(height*height);
}
 void max (int x,int y){
 if(x>y){
    printf("%d",x);
 }
 else{
    printf("%d",y);
 }
 }

void janaencryption(){
char message[50];
    int key;
    printf("enter the message:");
    gets(message);
    printf("enter the key:");
    scanf("%d",&key);

for(int i=0;i<strlen(message);i++){
        printf("%c",message[i]=message[i]+key);
}
}
void swap(int max,int min){
int temp;
temp=max;
max=min;
min=temp;
printf("now\n");
printf("the max variables is equal %d\n",max);
printf("the min variables is equal %d\n",min);

}
void search(int x[],int size, int value){

for(int i=0;i<size(x);i++){
    if(x[i]==value){
        printf("found\n");
    }
    else{
        printf("not found\n");
    }
}
}
