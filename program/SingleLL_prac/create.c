#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* link;
};

struct node * del_last(start)
{
    struct node * prevptr;
    struct node *ptr=NULL; 
    while(ptr->link!=NULL)
    {
    prevptr=ptr;
    ptr=ptr->link;
    }
    prevptr->link=NULL;
    free(ptr);
}


struct node* del_first(struct node* start)
{

    if(start==NULL)
    {
        printf("UNDERFLOW");
    }
    else if(start->link=NULL)
    {
        struct node*temp=start;
        start=start->link;
        free(temp);
    }
    return start;
}

struct node * del_pos(struct node * start,int pos)
{
    int i=1;
    int count=0;
    struct node *ptr=start;
    while(ptr->link==NULL)
    {
        ptr=ptr->link;
        count++;
    }
    if(start==NULL)
    printf("onderflow");
    else if(pos>count)
    {
        printf("incorrect position");
    }
    else
    {
        while(i<pos-1)
        {
            struct node * prevptr=ptr;
            ptr=ptr->link;
            i++;
        }
    }

}

void display(struct node* start)
{
    printf("******displaying******");
    struct node* ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("\n%d",ptr->data);
        ptr=ptr->link;
    }
}
struct node * ins_fir(start)
{
    int a;
    struct node * new_node=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&a);
    new_node->data=a;
    if(start=NULL)
    printf("empty list");
    new_node->link=start;
    start=new_node;
    return start;
};

struct node* ins_pos(struct node* start,int pos)
{
    struct node * ptr=start;
    int a;
    struct node * new_node=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&a);
    new_node->data=a;
    while(ptr->data=pos)
    {
        ptr=ptr->link;
    }
    new_node->link=ptr->link;
    ptr->link=new_node;
    return start;
}

struct node* ins_end(struct node* start)
{
printf("******inserting int he end******");
struct node *new_node=(struct node *)(malloc(sizeof(struct node)));
if(new_node=NULL)
{
    printf("overflow");
}
int a;
struct node*ptr=start;
printf("\nenter the data or -1 to exit");
scanf("%d",&new_node->data);
new_node->link=NULL;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
ptr->link=new_node;
new_node->link=NULL;
return start;
}


struct node *create(struct node * start)
{
    int a;
    start=NULL;
    printf("enter the num or -1 to exit");
    scanf("%d",&a);
    do{
    struct node *new_node=(struct node *)(malloc(sizeof(struct node)));
    new_node->data=a;
    if(start==NULL)
    {
        start=new_node;
        new_node->link=NULL;
    }
    else
        {
            new_node->link=start;
            start=new_node;
        }
    printf("\nenter the num or -1 to exit");
    scanf("%d",&a);  
    }while(a!=-1);
    return start;
}


int main()
{
int choice,pos;
scanf("%d",&choice);
struct node* start=NULL;
switch(choice){
case 1:
create(start);
case 2:
display(start);
case 3:
ins_end(start);
case 4:
ins_fir(start);
case 5:
printf("enter pos data");
scanf("%d",&pos);
ins_pos(start,pos);
case 6:
del_last(start);
case 7:
del_first(start);
case 8:
del_pos(start,pos);
};
}