#include<stdio.h>
void avg (int a, int b, int c)
{
	float aver;
	aver=(a+b+c)/3.0;
	printf("average=%f",aver);
}
int main()
{
	int n1,n2,n3;
	printf("Enter three no.");
	scanf("%d %d %d",&n1,&n2,&n3);
	avg(n1,n2,n3);
	return 0;
}