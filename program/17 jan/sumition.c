#include<stdio.h>  
  
int sum(int num)  
{  
    if(num)  
        return(num + sum(num-1));  
    else 
        return 0;  
}
int main()  
{  
    printf("summation of 1 to 10 is %d\n",sum(10));  
    return 0;  
}