#include<stdio.h>
int main()
{
    char word[20];
    int i,count=0;
    scanf("%s",&word);
    for(i=0;i<20;i++)
    {
        if(word[i]=='a'||word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
        count++;
    }
    printf("%d",count);
}