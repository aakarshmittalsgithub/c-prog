#include<stdio.h>
struct account
{
int acc_no;
float bal;
char name;
};
void add(int a)
{
    float new_bal,add;
    printf("enter the amt to add");
    scanf("%f",add);
    new_bal=a+add;
    printf("the amt is succesfully added");
    printf("your new bal is %d",new_bal);
}
void with(int a)
{
    float new_bal,sub;
    printf("enter the amt to add");
    scanf("%f",sub);
    new_bal=a-sub;
    printf("the amt is succesfully added");
    printf("your new bal is %d",new_bal);
}
int main()
{
    struct account a;
    int opt;
    a.bal==2323.23;
    printf("enter your acc no.");
    scanf("%d",&a.acc_no);
    printf("Press 1. To add money");
    printf("Press 2. To withdraw money");
    printf("Press 3. To view balance");
    printf("Press 4. Exit");
    printf("Enter your option : ");
    scanf("%d",opt);
    if(opt==1)
    add(a.bal);
    if(opt==2)
    with(a.bal);
    if(opt==3)
    printf("%d",a.bal);
    if(opt==4)
    return 0;
}