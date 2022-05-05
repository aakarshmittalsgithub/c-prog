#include <stdio.h>
int max(int x[],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++){
		if(x[i]>t)
			t=x[i];
	}
	return(t);
}
int main()
{   
	int a[5],i;
    for(i=0;i<=4;i++){
    scanf("%d",&a[i]);
    }
	int n=5,m;
	m=max(a,n);
	printf("\nmax no is: %d",m);
}
