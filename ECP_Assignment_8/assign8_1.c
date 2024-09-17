
/*Declare a structure to store data for student information. The structure contains roll number,
name, marks for students. Write a program to accept information of student from user and print
the same
*/





#include<stdio.h>

typedef struct student
{

int roll_no ;

char name[100] ;

float marks ;

}Stud_S1;


int main()

{

Stud_S1 s1 ;

printf("Enter student information (rollno, name,marks) : ");
scanf("%d %s %f", &s1.roll_no, &s1.name, &s1.marks);


printf("rollno = %d\nname = %s\nmarks = %.3f\n", s1.roll_no, s1.name, s1.marks);


return 0;
}



















































