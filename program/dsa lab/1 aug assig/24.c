#include<stdio.h>

struct Student {
  char name[100];
  float cgpa;
};

int contains_word(char s[], char word[]) {
  int k=0,j=0;

  for(char* i=s;*i != '\0';i++) {
    if(*i == word[j]) {
     k= 1;
     j++;
    } else {
     k=0;
      j=0;
    }
  }
  return k;
}

void find_std(struct Student std[], int n) {
  for(int i=0;i<n;i++)
    if(contains_word(std[i].name, "kumar"))
      printf("name: %s\ncgpa: %f", std[i].name, std[i].cgpa);
}

int main() {
  int n;
  printf("Enter the number of students you want to enter.\n");
  scanf("%d", &n);

  struct Student std[n];
  printf("Enter the student details\n");

  for(int i=0;i<n;i++) {
    printf("Name: ");
    scanf("%s", std[i].name);
    printf("cpga: ");
    scanf("%f", &std[i].cgpa);
  }

  printf("Student whose name contains kumar is: \n");
  find_std(std, n);

  return 0;
}