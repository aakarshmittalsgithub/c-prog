#include<stdio.h>
void sqr(int side)
{
    int peri,area;
    peri=4*side;
    area=side*side;
    printf("\n\narea of sqr is %d and perimeter of sqr is %d\n",area,peri); 
}
void rec(int l,int b)
{
    int area,peri;
    area=l*b;
    peri=2*(l+b);
    printf("\narea of rec is %d and perimeter of rec is %d\n",area,peri);
}
void cicle(int r)
{
    int area,peri;
    area=3.14*r*r;
    peri=2*3.14*r;
    printf("\narea of circle is %d and perimeter of circle is %d\n",area,peri);
}
int main()
{
int side,l,b,r;
printf("enter side of sqr");
scanf("%d",&side);
printf("\nenter len of rec");
scanf("%d",&l);
printf("enter bre of rec");
scanf("%d",&b);
printf("\nenter rad of cicle");
scanf("%d",&r);
sqr(side);
rec(l,b);
cicle(r);
}