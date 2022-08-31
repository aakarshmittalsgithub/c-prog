#include<stdio.h>

struct Student {
  char name[100];
  float cgpa;
};

int only_contains_e(char s[]) {
  for(char* v=s;*v != '\0';v++)
    if(*v=='a'||*v =='o'||*v =='i'||*v =='u'||*v =='A'||*v=='O'||*v=='I'||*v=='U') 
      return 0;

  return 1;
}

void find_std(struct Student std[], int n) {
  int k=0;
  for(int i=0;i<n;i++)
    if(only_contains_e(std[i].name) == 1) {
      printf("name: %s\ncgpa: %f", std[i].name, std[i].cgpa);
      k= 1;
    }
  if(k== 0) printf("NONE");
}

int main() 
{
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

  printf("Student whose name contains only e as a vowel is: \n");
  find_std(std, n);
  return 0;
}