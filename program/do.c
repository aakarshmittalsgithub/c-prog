#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *lptr;
    int data;
    struct node *rptr;
};

void forward_traverse(struct node *start, struct node *temp)
{
    temp = start;
    while (temp->rptr != start)
    {
        printf("\t%d", temp->data);
        temp = temp->rptr;
    }
    printf("\t%d", temp->data);
}
void reverse_traverse(struct node *start, struct node *temp)
{
    temp = start->lptr;
    while (temp->lptr != start->lptr)
    {
        printf("\t%d", temp->data);
        temp = temp->lptr;
    }
    printf("\t%d", temp->data);
}

int node_count(struct node *start, struct node *temp, int count)
{
    temp = start;
    while (temp->rptr != start)
    {
        count++;
        temp = temp->rptr;
    }
    count++;

    return count;
}

struct node *ins_first(struct node *start)
{
    struct node *temp;
    // insert node at first position
    temp = start->lptr;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("OVERFLOW");
        return 0;
    }
    else
    {
        printf("\nEnter the data:\t");
        scanf("%d", &new_node->data);
        new_node->rptr = start;
        start->lptr = new_node;
        new_node->lptr = temp;
        temp->rptr = new_node;
        start = new_node;
    }
}
struct node *ins_pos(struct node *start)
{
    struct node *temp = start;
    int pos, i = 1, res, count = 0;
    printf("\nEnter the position at which do you want to insert:\t");
    scanf("%d", &pos);
    res = node_count(start, temp, count);
    if (pos > res || pos < 0)
    {
        printf("\n\nINVALID POSITION TO INSERT NODE \n\n");
    }
    else
    {
        while (i < pos)
        {
            temp = temp->rptr;
            i++;
        }
        struct node * new_node = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data:\t");
        scanf("%d", &new_node->data);
        new_node->rptr = temp->rptr;
        temp->rptr = new_node;
        new_node->lptr = temp;
        new_node->rptr->lptr = new_node;
        temp = new_node;
        return start;
    }
}
struct node *ins_last(struct node *start)
{
    // insert node at last position;
    struct node *temp = start->lptr;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data:\t");
    scanf("%d", &new_node->data);
    temp->rptr = new_node;
    new_node->lptr = temp;
    temp = new_node;
    new_node->rptr = start;
    start->lptr = temp;
}

int main()
{
    struct node *start, *new_node, *temp;
    start = NULL;
    int choice = 1;
    while (choice == 1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data:\t");
        scanf("%d", &new_node->data);
        new_node->lptr = NULL;
        new_node->rptr = NULL;

        if (start == NULL)
        {
            start = temp = new_node;
        }
        else
        {
            temp->rptr = new_node;
            new_node->lptr = temp;
            temp = new_node;
        }
        new_node->rptr = start;
        start->lptr = new_node;

        printf("Enter 1 to insert more data else enter 2:\t");
        scanf("%d", &choice);
    }
start:
    printf("\n\n\n");
    printf("Enter 1 to forward traverse the list.\n");
    printf("Enter 2 to reverse traverse the list.\n");
    printf("Enter 3 to insert node at first position.\n");
    printf("Enter 4 to insert node at last position.\n");
    printf("Enter 5 to insert node at any position.\n");
    printf("Enter 0 to exit from all operations.\n\n");
    int decision;
    printf("\nEnter your choice of operation:\t");
    scanf("%d", &decision);
    switch (decision)
    {
    case 1:
        forward_traverse(start, temp);
        break;
    case 2:
        reverse_traverse(start, temp);
        break;    
    case 3:
        ins_first(start);
        break;
    case 4:
        ins_last(start);
        break;
    case 5:
        ins_pos(start);
        break;
    case 0:
        return 0;
    default:
        printf("\n\nINVALID OPERATION TO PERFORM\nKINDLY ENTER VALID CHOICE AND TRY AGAIN\n\n\n");
    }
    goto start;
}