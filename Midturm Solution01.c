#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    a=10,b=25,c=40,d=b,e=1;
    if(((a<=b)&&(c>40))||e)
    {
        printf("Inside if!");
    }
    else
    {
        printf("Outside if...");
    }
    printf("IF-ELSE");
    return 0;
}
