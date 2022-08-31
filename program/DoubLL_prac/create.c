#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *lptr;
    int data;
    struct node *rptr;
};
struct node * create(struct node * start)
{
    int a;
    struct node * new_node=(struct node *)(malloc(sizeof(struct node)));
    printf("enter the data or -1 to exit");
    scanf("%d",&a);
    while(a!=-1){
    if(start=NULL)
    {
        new_node->data=a;
        start=new_node;
        new_node->lptr=NULL;
        new_node->rptr=NULL;
    }
    else
    {
    new_node->data=a;    
    new_node->lptr=NULL;
    new_node->rptr=start;
    start->lptr=new_node;
    start->rptr=NULL;
    start=new_node;
    }
    printf("enter the data or -1 to exit");
    scanf("%d",&a);
    };
    return start;
}
int main()
{
    struct node* start=NULL;
    int option;
    printf("1.to create");
    printf("\nenter option");
    scanf("%d",&option);
    switch(option)
    case 1:
    create(start);
}