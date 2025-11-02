#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50
struct Student {
    char name[NAME_LENGTH];
    int score;
};

void findScore99Students(struct Student students[], int size) {
    int count = 0;
    
    printf("\nStudents who scored 99:\n");
    printf("----------------------\n");
    
    for (int i = 0; i < size; i++) {
        if (students[i].score == 99) {
            printf("%d. %s\n", count + 1, students[i].name);
            count++;
        }
    }
    
    if (count == 0) {
        printf("No student scored 99\n");
    } else {
        printf("\nTotal number of students who scored 99: %d\n", count);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int size;
    
    printf("Enter the number of students (1-%d): ", MAX_STUDENTS);
    scanf("%d", &size);
    
    if (size < 1 || size > MAX_STUDENTS) {
        printf("Invalid number of students!\n");
        return 1;
    }
    
    printf("\nEnter student details:\n");
    for (int i = 0; i < size; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        getchar(); // 
        fgets(students[i].name, NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; 
        
        printf("Score (0-100): ");
        scanf("%d", &students[i].score);
        

        if (students[i].score < 0 || students[i].score > 100) {
            printf("Invalid score! Please enter between 0 and 100\n");
            return 1;
        }
    }
    findScore99Students(students, size);
    
    return 0;
}