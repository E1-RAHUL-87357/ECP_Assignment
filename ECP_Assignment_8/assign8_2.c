#include <stdio.h>
#include <string.h>

typedef struct {
    int rollNumber;
    char name[100];
    float marks;
} Student;

void acceptStudentInfo(Student *student);
void printStudentInfo(const Student *student);

int main() {
    Student student; 

    acceptStudentInfo(&student);

    printf("\nStudent Information:\n");
    printStudentInfo(&student);

    return 0;
}

void acceptStudentInfo(Student *student) {
    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);

    while (getchar() != '\n');

    printf("Enter name: ");
    fgets(student->name, sizeof(student->name), stdin);

    size_t len = strlen(student->name);
    if (len > 0 && student->name[len - 1] == '\n') {
        student->name[len - 1] = '\0';
    }

    printf("Enter marks: ");
    scanf("%f", &student->marks);
}

void printStudentInfo(const Student *student) {
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Name: %s\n", student->name);
    printf("Marks: %.2f\n", student->marks);
}















































