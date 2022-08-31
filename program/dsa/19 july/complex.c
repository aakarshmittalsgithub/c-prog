#include<stdio.h>
struct Nos
{
    float imag1;
    float imag2;
    float real1;
    float real2;
    float sumimag;
    float diffimag;
    float sumreal;
    float diffreal; 
};
int main()
{
    struct Nos S;
    scanf("%f",&S.real1);
    scanf("%f",&S.imag1);
    scanf("%f",&S.real2);
    scanf("%f",&S.imag2);
    printf("first complex no. is %0.2f+%0.2fi\n",S.real1,S.imag1);
    printf("sec complex no. is %0.2f+%0.2fi",S.real2,S.imag2);
    S.sumimag=S.imag1+S.imag2;
    S.sumreal=S.real1+S.real2;
    S.diffimag=S.imag1-S.imag2;
    S.diffreal=S.real1-S.real2;
    float* sumi=&S.sumimag;
    float* sumr=&S.sumreal;
    float* diffi=&S.diffimag;
    float* diffr=&S.diffreal;
    printf("\nsum=%0.2f+%0.2fi\n",*sumr,*sumi);
    printf("diff=%0.2f+%0.2fi",*diffr,*diffi);
    }