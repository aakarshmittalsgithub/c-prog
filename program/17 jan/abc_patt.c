#include <stdio.h>

void display(char s[])
{
    if(s[0]=='\0')
    return;
    printf("%s\n",s);
    display(s+1);
}

void reverse(char s[])
{
    if(s[0]=='\0')
    return;
    reverse(s+1);
    printf("%c",s[0]);
}

int main()
{
    char s[]="ABCD";
    display(s);
    reverse(s);
    return 0;
}