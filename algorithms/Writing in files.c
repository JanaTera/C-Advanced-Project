#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    typedef struct students{
    char  name [20];
    int age;
    int grade;
    int Zipcode;
    }students;

    students student;
    printf("Enter the student name:");
    scanf("%s",&student.name);
    printf("Enter the student age:");
    scanf("%d",&student.age);
    printf("Enter the student grade:");
    scanf("%d",&student.grade);

    printf("Enter the student Zipcode:");
    scanf("%d",&student.Zipcode);

    FILE *file=fopen("student data.csv","a");
    if(file==NULL){
        return 1;
    }
    else{
        fprintf(file,"%s,%d,%d,%d\n",student.name,student.age,student.grade,student.Zipcode);
        fclose(file);
    }










   /* printf("Student name is:%s\n",studentOne.name);
    printf("Student age %d\n",studentOne.age);
    printf("Student grade %d\n",studentOne.grade);
    printf("Student Zipcode %d\n",studentOne.Zipcode);
   */
}
