#include<stdio.h>
struct Date {
  int dd;
  int mm;
  int yyyy;
};

struct student 
{
  struct Date date;
};
void display_date(struct Date date) {
  printf("Date: %d/%d/%d\n", date.dd, date.mm, date.yyyy);
}
int main() 
{
    struct student std;
    printf("Date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &std.date.dd, &std.date.mm, &std.date.yyyy);
    display_date(std.date);
    return 0;
}