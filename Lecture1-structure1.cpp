#include <stdio.h>
#include <string.h>  // Include <string.h> for string manipulation functions
#include <stdlib.h>

struct student {
    char Name[35];
    int age;
    char address[56];
    int roll;
    int section;
};

int main() {
    struct student s;

    printf("Enter the name of student: ");
    scanf("%34s", s.Name);  // Limit the input to 34 characters to avoid buffer overflow

    printf("Enter the age of student: ");
    scanf("%d", &s.age);

    printf("Enter the address of student: ");
    scanf("%55s", s.address);  // Limit the input to 55 characters to avoid buffer overflow

    printf("Enter the rollno of student: ");
    scanf("%d", &s.roll);

    printf("Enter the section of student: ");
    scanf("%d", &s.section);

    printf("Name: %s\n", s.Name);
    printf("Age: %d\n", s.age);
    printf("Address: %s\n", s.address);
    printf("Roll No: %d\n", s.roll);
    printf("Section: %d\n", s.section);

    return 0;
}

