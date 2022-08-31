#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    int power;
    struct node *next;
};
struct node *getnode(int data, int power)
{
    // Create dynamic memory of node
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        return NULL;
    }
    new_node->data = data;
    new_node->power = power;
    new_node->next = NULL;
    return new_node;
}
// Update node value
void updateRecord(struct node *ptr, int data, int power)
{
    ptr->data = data;
    ptr->power = power;
};

struct node * AddPolynomial(struct node * start)
{
    struct node * new_node = (struct node *)malloc(sizeof(AddPolynomial));
    if (start == NULL)
    {
        // Failed to create memory
        return NULL;
    };
    new_node->next = NULL;
    return start;
}
// Display given polynomial nodes
void display(struct node *ptr)
{
    if (ptr->start == NULL)
    {
        printf("Empty Polynomial ");
    }
    printf(" ");
    struct node *temp = ptr->start;
    while (temp != NULL)
    {
        if (temp != ptr->start)
        {
            printf(" + %d", temp->data);
        }
        else
        {
            printf("%d", temp->data);
        }
        if (temp->power != 0)
        {
            printf("x^%d", temp->power);
        }
        // Visit to next node
        temp = temp->next;
    }
    printf("\n");
}
// Add node with given data and power
void addnode(struct node *next, int data, int power)
{
    if (ptr->start == NULL)
    {
        // Add first node
        ptr->start = getnode(data, power);
    }
    else
    {
        struct node *node = NULL;
        struct node *temp = ptr->start;
        struct node *location = NULL;
        // Find the valid new node location
        while (temp != NULL &&
               temp->power >= power)
        {
            location = temp;
            temp = temp->next;
        }
        if (location != NULL &&
            location->power == power)
        {
            // When polynomial power already exists
            // Then add current add to previous data
            location->data = location->data + data;
        }
        else
        {
            node = getnode(data, power);
            if (location == NULL)
            {
                // When add node in begining
                node->next = ptr->start;
                ptr->start = node;
            }
            else
            {
                // When adding node in intermediate
                // location or end location
                node->next = location->next;
                location->next = node;
            }
        }
    }
}
// Add two polynomial
struct node *addTwoPolynomials(AddPolynomial *ptr, AddPolynomial *other)
{
    // Define some useful variable
    struct node *result = NULL;
    struct node *tail = NULL;
    struct node *node = NULL;
    // Get first node of polynomial
    struct node *first = ptr->start;
    struct node *second = other->start;
    // Execute loop until when polynomial are exis
}