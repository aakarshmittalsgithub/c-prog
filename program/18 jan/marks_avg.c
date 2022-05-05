#include <stdio.h>
struct Student{
    int roll;
    int sem;
    float PCM[3];
    float avg;
};
int main()
{
    struct Student S;
    printf("roll No.: ");
    scanf("%d",&S.roll);
    printf("semester no. : ");
    scanf("%d",&S.sem);
    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            printf("physics Marks: ");
            scanf("%f",&S.PCM[i]);
        }
        if(i==1)
        {
            printf("chemistry Marks: ");
            scanf("%f",&S.PCM[i]);
        }
        if(i==2)
        {
            printf("maths Marks: ");
            scanf("%f",&S.PCM[i]);
        }
    }
    S.avg=(float)(S.PCM[0]+S.PCM[1]+S.PCM[2])/3.0;
    printf("Entered Roll No.:%d\nEntered Semester:%d\n",S.roll,S.sem);
    printf("Entered Marks in the order PCM:\n");
    for(int i=0;i<3;i++)
    printf("%f\n",S.PCM[i]);
    printf("The Average is %f",S.avg);   
    return 0;
}

