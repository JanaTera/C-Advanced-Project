#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct student{
    char  name [20];
    int age;
    int grade;
    int Zipcode;
    }student;

    student studentOne;
    printf("Enter the student age:");
    scanf("%d",&studentOne.age);
    printf("Enter the student grade:");
    scanf("%d",&studentOne.grade);
    printf("Enter the student name:");
    scanf("%s",&studentOne.name);
    printf("Enter the student Zipcode:");
    scanf("%d",&studentOne.Zipcode);


   student studentTwo;


    printf("Enter the student age:");
    scanf("%d",&studentTwo.age);
   printf("Enter the student grade:");
  scanf("%d",&studentTwo.grade);
  printf("Enter the student name:");
  scanf("%s",&studentTwo.name);
  printf("Enter the student Zipcode:");
    scanf("%d",&studentTwo.Zipcode);


    printf("Student name is:%s\n",studentOne.name);
    printf("Student age %d\n",studentOne.age);
    printf("Student grade %d\n",studentOne.grade);
    printf("Student Zipcode %d\n",studentOne.Zipcode);
    printf("Student name is:%s\n",studentTwo.name);
    printf("Student age %d\n",studentTwo.age);
    printf("Student grade %d\n",studentTwo.grade);
    printf("Student Zipcode %d\n",studentTwo.Zipcode);
}
