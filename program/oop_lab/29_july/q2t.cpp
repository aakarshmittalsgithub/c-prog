#include <stdio.h>
struct Marks {
    int roll_no;
    char name[30];
    float sub1,sub2,sub3,sub4,sub5;
    float percentage;
};

int main() {
	
    struct Marks marks[5];    
    for(int i=0; i<5; i++){
		printf("Student %d\n",i+1);
        printf("Enter roll no. :\n");
        scanf("%d", &marks[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",marks[i].name);
        printf("Enter Subject1 marks :\n");
        scanf("%f", &marks[i].sub1);
        printf("Enter Subject2 marks :\n");
        scanf("%f", &marks[i].sub2);
        printf("Enter Subject3 marks :\n");
        scanf("%f", &marks[i].sub3);
        printf("Enter Subject4 marks :\n");
        scanf("%f", &marks[i].sub4);
        printf("Enter Subject5 marks :\n");
        scanf("%f", &marks[i].sub5);
    }
    printf("\nDisplaying Details of students\n");
	for(int i=0; i<5; i++)
    {
        printf("\n--------------------------------------------------\n");
	    printf("Student %d\n",i+1);
        printf("Roll No. : %d\n",marks[i].roll_no);
        printf("Name : %s\n",marks[i].name);
        int total_marks=marks[i].sub1 + marks[i].sub2 + marks[i].sub3+ marks[i].sub4+ marks[i].sub5;
        printf("Total marks: %d\n",total_marks);
	    marks[i].percentage = (marks[i].sub1 + marks[i].sub2 + marks[i].sub3+ marks[i].sub4+ marks[i].sub5)/500.0*100;
	    printf("Percentage : %0.02f", marks[i].percentage);
	}
    printf("\n*****************************************************\n");
    printf("Details of students how scored more than 90%");
    for(int i=0; i<5; i++)
    {
        if(marks[i].percentage>90)
        {
        printf("\nName :%s",marks[i].name);
        printf("\nRoll No. :%d",marks[i].roll_no);
        printf("\nPercentage scored : %0.02f",marks[i].percentage);
        }
    }
    printf("\n/nDetails of students how scored between 60-90");
    for(int i=0; i<5; i++)
    {
        if(marks[i].percentage<90 && marks[i].percentage>60)
        {
        printf("\nName :%s",marks[i].name);
        printf("\nRoll No. :%d",marks[i].roll_no);
        printf("\nPercentage scored : %0.02f\n\n",marks[i].percentage);       
        }
    }
  return 0;
}