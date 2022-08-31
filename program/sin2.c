#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *start)
{
    struct node *temp;
    temp = start;
    while (temp->next != start)
    {
        printf("\t%d", temp->data);
        temp = temp->next;
    }
    printf("\t%d", temp->data);
}

int node_count(struct node *start, int count)
{
    struct node *temp;
    temp = start;
    while (temp->next != start)
    {
        count++;
        temp = temp->next;
    }
    count++;
    return count;
}

struct node *ins_first(struct node *start)
{
    struct node *temp;
    temp = start;
    while (temp->next != start)
    {
        temp = temp->next;
    }
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data:\t");
    scanf("%d", &new_node->data);
    new_node->next = start;
    start = new_node;
    temp->next = start;
    return start;
}

struct node *ins_last(struct node *start)
{
    struct node *temp;
    temp = start;
    while (temp->next != start)
    {
        temp = temp->next;
    }
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &new_node->data);
    temp->next = new_node;
    new_node->next = start;
    return start;
}
////////////////////////////////
  
// ins pos
struct node *ins_pos(struct node *start)
{
    int pos;
    struct node *temp;
    int res, count = 0;
    res = node_count(start, count);
    printf("\nAfter which position do you want to insert a node:   ");
    scanf("%d", &pos);
    int i = 1;
    temp = start;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data:\t");
    scanf("%d", &new_node->data);
    new_node->next = temp->next;
    temp->next = new_node;
    temp = new_node;
    return start;
}

int main()
{
    int pos;
    struct node *start, *new_node, *temp, *prevnode;
    start = 0;
    int choice = 1;
    while (choice == 1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data:\t");
        scanf("%d", &new_node->data);

        if (start == 0)
        {
            start = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        new_node->next = start;
        printf("Enter 1 to insert more data else enter 0:   ");
        scanf("%d", &choice);
    }

start:
    printf("\n\n\nEnter 1 to traverse the list.");
    printf("\nEnter 2 to insert node at first position.");
    printf("\nEnter 3 to insert node at last position.");
    printf("\nEnter 4 to insert node at any position.");
    printf("\nEnter 0 to exit from all operations.");

    int option;
    printf("\n\nEnter your choice of operation:   ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        traverse(start);
        break;
    case 2:
        ins_first(start);
        break;
    case 3:
        ins_last(start);
        break;
    case 4:
        ins_pos(start);
        break;
    case 0:
        return 0;
    default:
        printf("\n\nINVALID OPERATION TO PERFORM\nKINDLY ENTER PROPER CHOICE TO PERFORM VALID OPERATION\n\n");
        goto start;
    }
}