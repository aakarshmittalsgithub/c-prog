#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *link;
};


void display(struct node *start)
{
  printf("**********displaying***********");
  struct node *ptr = start;
  if(ptr==NULL)
  printf("\nnothing to print\n");
  while (ptr != NULL)
  {
    ptr=ptr->link;
    printf("%d\n", ptr->data);
  }
};

struct node *create(struct node *start)
{
  int x;
  printf("enter data or -1 to exit");
  scanf("%d", &x);
  do
  {
    struct node *new_node = (struct node *)(malloc(sizeof(struct node)));
    new_node->data = x;
    if (start == NULL)
    {
      new_node->link = new_node;
      start = new_node;
    }
    else
    {
      new_node->link = start;
      start = new_node;
    }
    printf("enter data or -1 to exit");
    scanf("%d", &x);
  }while (x != -1);
  display(start);
};

struct node *insbeg(start)
{
int a;
struct node *new_node = (struct node *)(malloc(sizeof(struct node)));
struct node *ptr=start;
if(start==NULL);
printf("the list is empty");
printf("enter the data or -1 to exit");
scanf("%d",&a);
new_node->data=a;
new_node->link=start;
start=new_node;
}
struct node *insend()
{
    struct node *ptr=start;
    int a;
    printf("enter the data or -1 to exit ");
    scanf("%d",&a);
    while(ptr!=NULL)
    ptr==
    struct node *new_node = (struct node *)(malloc(sizeof(struct node)));
}
int main()
{
  struct node *start=NULL;
  int n;
  //create(start);
  do
  {
    printf("1.to create a list\n2.to insert at beg\n3.to delete\n4.to display\n-1 to exit ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
      create(start);
      break;
    case 2:
      // insbeg();
    case 3:
      // del();
    case 4:
      display(start);
    default:
      break;
    }
  }while (n!=-1);
}