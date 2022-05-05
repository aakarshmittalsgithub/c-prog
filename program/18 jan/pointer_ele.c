#include <stdio.h>
struct person
{
   int age;
   int height;
   float weight;
};

int main()
{   
    struct person *personPtr, person1;
    personPtr = &person1;
    printf("Enter age: ");
    scanf("%d", &personPtr->age);
    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);
    printf("Enter height(in cm): ");
    scanf("%d", &personPtr->height);  

    printf("display:\n");
    printf("age: %d\n", personPtr->age);
    printf("weight: %f\n", personPtr->weight);
    printf("height: %d", personPtr->height);

    return 0;
}