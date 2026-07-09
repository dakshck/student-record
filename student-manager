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

  printf("\n---Student Record---\n\n");

  while(choice != 4) {
    printf("1. Add Students\n");
    printf("2. List Students\n");
    printf("3. Delete Students\n");
    printf("4. Exit\n");
    printf(": ");
    scanf("%d", &choice);

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

  printf("Name of the student: ");
  getchar();
  fgets(students[counter].name, 50, stdin) ;
  students[counter].name[strcspn(students[counter].name, "\n")] = '\0';
  printf("Marks: ");
  scanf("%d", &students[counter].mark);
  printf("\n");
  
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

void liststudents() {
  int comfynum = 1;
  if(counter == 0) {
    printf("No students found\n");
    return;
  }
  else{
    for(int i = 0; i < counter; i++) {
      printf("%d. Name: %s   Marks: %d  Grade: %c\n", comfynum, students[i].name, students[i].mark, students[i].grades);
      comfynum++;
    }
  }
  printf("\nStudent data indexed successfully\n\n");
}

void delstudents() {
  int stunum;
  liststudents();
  printf("Enter the students index number to del.\n");
  printf(": ");
  scanf("%d", &stunum);

  if(stunum >= 0 && stunum < counter) {
    stunum--;
    for(int i = stunum; i < counter - 1; i++) {
      students[i] = students[i + 1];
    }
  counter--;
  }
  else{
    printf("Student data doesn't exist.\n");
  }
}
