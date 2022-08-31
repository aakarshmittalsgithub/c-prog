#include<stdio.h>

struct Student {
  char name[15];
  int roll;
  float cgpa;
};

void display(struct Student std) {
  printf("student's name: %s\n", std.name);
  printf("student's roll: %d\n", std.roll);
  printf("student's cgpa: %f\n", std.cgpa);
}

int main() {
  struct Student std;
  printf("Enter the student details\n");

  printf("Name: ");
  scanf("%s", std.name);
  printf("Roll: ");
  scanf("%d", &std.roll);
  printf("cpga: ");
  scanf("%f", &std.cgpa);
  display(std);
  return 0;
}