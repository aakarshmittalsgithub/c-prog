#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	int power;
	struct node * next;
};
struct node * getnode(int data, int power)
{
	struct node *ref = (struct node *)malloc(sizeof(struct node));
	if (ref == NULL)
	{
		return NULL;
	}
	ref->data = data;
	ref->power = power;
	ref->next = NULL;
	return ref;
}
void updateRecord(struct node * ref, int data, int power)
{
	ref->data = data;
	ref->power = power;
}

typedef struct AddPolynomial
{
struct node * head;
}AddPolynomial;


AddPolynomial * getAddPolynomial()
{
	AddPolynomial * ref = (AddPolynomial * ) malloc(sizeof(AddPolynomial));
	if (ref == NULL)
	{
		// Failed to create memory 
		return NULL;
	}
	ref->head = NULL;
	return ref;
}
// Display given polynomial nodes
void display(AddPolynomial * ref)
{
	if (ref->head == NULL)
	{
		printf("Empty Polynomial ");
	}
	printf(" ");
	struct node * temp = ref->head;
	while (temp != NULL)
	{
		if (temp != ref->head)
		{
			printf(" + %d", temp->data);
		}
		else
		{
			printf("%d",temp->data);
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
void addNode(AddPolynomial * ref, int data, int power)
{
	if (ref->head == NULL)
	{
		// Add first node
		ref->head = getnode(data, power);
	}
	else
	{
		struct node * node = NULL;
		struct node * temp = ref->head;
		struct node * location = NULL;
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
			struct node * node = getnode(data, power);
			if (location == NULL)
			{
				// When add node in begining
				node->next = ref->head;
				ref->head = node;
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
struct node * addTwoPolynomials(AddPolynomial * ref,AddPolynomial * other)
{
	// Define some useful variable
	struct node * result = NULL;
	struct node * tail = NULL;
	struct node * node = NULL;
	struct node * first = ref->head;
	struct node * second = other->head;
	// Execute loop until when polynomial are exist
}