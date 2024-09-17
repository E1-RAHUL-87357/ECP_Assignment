#include <stdio.h>
#include <string.h>

typedef struct {
    int rollNumber;
    char name[100];
    float marks;
} Student;


void acceptStudentArray(Student students[], int count);
void printStudentArray(const Student students[], int count);

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    Student students[numStudents];

    while (getchar() != '\n');

    acceptStudentArray(students, numStudents);

    printf("\nStudent Information:\n");
    printStudentArray(students, numStudents);

    return 0;
}

void acceptStudentArray(Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter information for student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        while (getchar() != '\n');

        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        while (getchar() != '\n');
    }
}

void printStudentArray(const Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}























































