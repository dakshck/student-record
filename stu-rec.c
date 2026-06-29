#include <stdio.h>
#include <string.h>

#define MAX 100

void addstudent();

typedef struct {
  char name[50];
  int mark;
  char grades;
} Student;

Student students[MAX];

int counter = 0;

int main() {
  int choice = 0;

  while(choice != 4) {
    printf("1. Add Students\n");
    printf("2. List Students\n");
    printf("3. Delete Students\n");
    printf("4. Exit\n");
    printf(": ");
    scanf("%d", &choice);

    switch(choice) {
      case 1:
        addstudent();
        break;
      case 2:
        break;
      case 3:
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

void addstudent() {

  printf("Name of the student: ");
  getchar();
  fgets(students[counter].name, 50, stdin) ;
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
}
