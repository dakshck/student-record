#include <stdio.h>
#include <string.h>

#define MAX 100

void addstudents();
void liststudents();
void delstudents();

typedef struct {
  char name[50];
  int mark;
  char grades;
} Student;

Student students[MAX];

int counter = 0;

int main() {
  int choice = 0;

  printf("\n---Student Manager---\n");

  while(choice != 4) {
    printf("\n1. Add Students\n");
    printf("2. List Students\n");
    printf("3. Delete Students\n");
    printf("4. Exit\n");
    printf(": ");
    scanf("%d", &choice);
    printf("-----------------------------------------------\n");

    switch(choice) {
      case 1:
        addstudents();
        break;
      case 2:
        liststudents();
        break;
      case 3:
        delstudents();
        break;
      case 4:
        printf("Exit\n");
        break;
      default: 
        printf("Input not defined\n");
    }

  }
  return 0;
}

void addstudents() {
char stuchoice = 'Y';
  while(stuchoice == 'Y' | stuchoice == 'y') {
    printf("Name of the student: ");
    getchar();
    fgets(students[counter].name, 50, stdin) ;
    students[counter].name[strcspn(students[counter].name, "\n")] = '\0';
    printf("Marks: ");
    scanf("%d", &students[counter].mark);
      
      if(students[counter].mark >= 91 && students[counter].mark <= 100) {
        students[counter].grades = 'A';
      }
      else if(students[counter].mark >= 81 && students[counter].mark <= 90) {
        students[counter].grades = 'B';
      }
      else if(students[counter].mark >= 71 && students[counter].mark<= 80) {
        students[counter].grades = 'C';
      }
      else if(students[counter].mark >= 61 && students[counter].mark<= 70) {
        students[counter].grades = 'D';
      }
      else if(students[counter].mark <= 60 && students[counter].mark >= 0) {
        students[counter].grades = 'E';
      }
      else{
        printf("Input not defined\n");
      }
    counter++;
    printf("Press 'Y' to add more students or 'N' to exit: ");
    scanf(" %c", &stuchoice);
  }
}

void liststudents() {
  int comfynum = 1;
  if(counter == 0) {
    printf("No students found\n");
    return;
  }
  else{
    for(int i = 0; i < counter; i++) {
      printf("%d. Name: %s  Marks: %d  Grade: %c\n", comfynum, students[i].name, students[i].mark, students[i].grades);
      comfynum++;
    }
  }
  printf("\nStudent data indexed successfully!\n");
}

void delstudents() {
  int stunum;
  char loopchoice = 'Y';
    while(loopchoice == 'Y' | loopchoice == 'y') {
      liststudents();
      printf("Enter the students index number to del: ");
      scanf("%d", &stunum);
      printf("\n");

        if(stunum >= 0 && stunum < counter) {
          stunum--;
            for(int i = stunum; i < counter - 1; i++) {
              students[i] = students[i + 1];
            }
          counter--;
          stunum++;
          printf("Student Indexed at %d deleted successfully!\n", stunum);
        }
        else{
          printf("Student data doesn't exist.\n");
        }
      printf("Press 'Y' to del more students or 'N' to exit: ");
      scanf(" %c", &loopchoice);
    }
}
