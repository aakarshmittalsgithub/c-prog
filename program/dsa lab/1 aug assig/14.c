#include<stdio.h>
int main()
{
    char word[7]={'a','a','k','a','r','s','h'},temp[7];
    int i,j,count=0;
    //scanf("%s",word);
    for(i=0;i<7;i++)
    {
        //printf("%c\n",word[i]);
        word[i]=temp[i];
        for(j=0;j<7;j++)
        {
        if(temp[i]==word[j])
        count++;
        }
        if(count==1)
        printf("%c",temp[i]);
        count=0;
    }
}