#include<stdio.h>
#include<stdlib.h>
struct node
{
int coffi;
int power;
struct node *link;
};

struct node *create(struct node * start)
{
struct node * new_node=(struct node *)malloc(sizeof(struct node));
printf("enter the coefficient");
scanf("%d",&new_node->coffi);
printf("enter the power");
scanf("%d",&new_node->power);
new_node->link=NULL;
if(start==NULL)
{
    start=new_node;
    
}
}

int main()
{
struct node * start=NULL;
create(start);
}