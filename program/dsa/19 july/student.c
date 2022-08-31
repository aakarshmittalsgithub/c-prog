#include<stdio.h>
struct Student
{
    float marks[3];
    char grade;
    char name[25];
    char char_grd;
};
int main()
{
    struct Student S[3];
    float sum;
    int j,i;
    for(j=1;j<=3;j++)
    {
    printf("enter name of student%d \n",j);
    scanf("%s",S[j].name);
    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            printf("sub1 Marks: ");
            scanf("%f",&S[j].marks[i]);
        }
        if(i==1)
        {
            printf("sub2 Marks: ");
            scanf("%f",&S[j].marks[i]);
        }
        if(i==2)
        {
            printf("sub3 Marks: ");
            scanf("%f",&S[j].marks[i]);
        }
        sum=sum+S[j].marks[i];
    }
    printf("sum of marks out of 300 : %0.2f",sum);
    float percentage=(sum/300)*100;
    printf("\nresult in percentage : %0.2fper",(sum/300)*100);
    if(percentage<40)
    printf("\n##percentage of student%d is less than 40##",j);
    printf("\nEnter char grd : ");
    scanf("%s",S[j].char_grd);
    printf("/************************************/\n");
    sum=0;
    }
}