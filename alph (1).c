#include<stdio.h>
void alp(char);
char i;
void main()
{   scanf("%c",&i);
    printf("the given alphabet %c",i);
    alp(i);
}
void alp(char i)
{
    if(i>='a' && i<='z' && i>='A' && i>='Z')
    {
        printf(" is a alphabet");
    }
    else
    {
        printf("is not a alphabet");
    }
}


