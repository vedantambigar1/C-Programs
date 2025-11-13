#include <stdio.h>
#include <string.h>

#define MAX 100   // maximum number of students

// structure to store student details
struct Student {
    int roll;
    char name[50];
    int age;
    float marks;
};

// global array of students
struct Student students[MAX];
int count = 0; // total students

// function to add student
void addStudent() {
    if (count >= MAX) {
        printf("\nDatabase full! Cannot add more students.\n");
        return;
    }
    struct Student s;
    printf("\nEnter Roll Number: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Age: ");
    scanf("%d", &s.age);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    students[count] = s;
    count++;

    printf("\nStudent added successfully!\n");
}

// function to display all students
void displayStudents() {
    if (count == 0) {
        printf("\nNo student records available.\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nRoll: %d", students[i].roll);
        printf("\nName: %s", students[i].name);
        printf("\nAge: %d", students[i].age);
        printf("\nMarks: %.2f\n", students[i].marks);
        printf("----------------------\n");
    }
}

// function to search student by roll
void searchStudent() {
    int roll;
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("\nStudent Found!\n");
            printf("Roll: %d\nName: %s\nAge: %d\nMarks: %.2f\n",
                   students[i].roll, students[i].name, students[i].age, students[i].marks);
            return;
        }
    }
    printf("\nStudent with Roll %d not found!\n", roll);
}

// function to update student details
void updateStudent() {
    int roll;
    printf("\nEnter Roll Number to update: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("\nEnter New Name: ");
            scanf(" %[^\n]", students[i].name);
            printf("Enter New Age: ");
            scanf("%d", &students[i].age);
            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);

            printf("\nStudent details updated!\n");
            return;
        }
    }
    printf("\nStudent with Roll %d not found!\n", roll);
}

// function to delete student
void deleteStudent() {
    int roll;
    printf("\nEnter Roll Number to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            // shift students
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            printf("\nStudent deleted successfully!\n");
            return;
        }
    }
    printf("\nStudent with Roll %d not found!\n", roll);
}

// main function
int main() {
    int choice;
    while (1) {
        printf("\n===== Student Management System =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: printf("\nExiting program...\n"); return 0;
            default: printf("\nInvalid choice! Please try again.\n");
        }
    }
    return 0;
}


