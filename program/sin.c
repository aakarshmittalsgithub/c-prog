#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
void traverse(struct node *head, struct node *temp){
    temp = head;
    while (temp->next!=head)
    {
        printf("\t%d",temp->data);
        temp = temp->next;
    }
    printf("\t%d",temp->data);
}
int node_count(struct node *head, struct node *temp, int count){
    temp = head;
    while (temp->next!=head)
    {
        count++;
        temp = temp->next;
    }
    count++;
    return count;
}
int main(){
    struct node *head, *newnode , *temp, *prevnode;
    head=0;
    int choice=1;
    while (choice==1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));  
        printf("\nEnter the data:\t");  
        scanf("%d",&newnode->data);

        if (head==0)
        {
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        newnode->next=head;
        printf("Enter 1 to insert more data else enter 0:   ");
        scanf("%d",&choice);
    }

    start:
    printf("\n\n\nEnter 1 to traverse the list.");
    printf("\nEnter 2 to insert node at first position.");
    printf("\nEnter 3 to insert node at last position.");
    printf("\nEnter 4 to insert node at any position.");
    printf("\nEnter 0 to exit from all operations.");

    int decision;
    printf("\n\nEnter your choice of operation:   ");
    scanf("%d",&decision);

    if (decision==1)
    {
        traverse(head,temp);
    }
    else if (decision==2)
    {
        temp = head;
        while (temp->next!=head)
        {
            temp = temp->next;
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data:\t");
        scanf("%d",&newnode->data);
        newnode->next = head;
        head = newnode;

        temp->next = head;
    }
    else if (decision==3)
    {
        temp = head;
        while (temp->next !=head)
        {
            temp = temp->next;
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        temp->next = newnode;
        newnode->next = head;

    }
    else if (decision==4)
    {
        // inserting node at any position
        int res,count=0;
        res = node_count(head,temp,count);
        int pos;
        printf("\nAfter which position do you want to insert a node:   ");
        scanf("%d",&pos);
        int i=1;
        temp = head;
        while (i<pos)
        {
            temp = temp->next;
            i++;
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data:\t");
        scanf("%d",&newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;
        temp = newnode;
    }
    
    else if (decision==0)
    {
        return 0;
    }
    else if (decision>=5 || decision<0)
    {
        printf("\n\nINVALID OPERATION TO PERFORM\nKINDLY ENTER PROPER CHOICE TO PERFORM VALID OPERATION\n\n");
    }
    
    goto start;
}