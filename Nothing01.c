#include<stdio.h>
int main()
{
int a=10, b=20, c=25, d=30;
if((a>b)||((c+a)<=d))
{
    if((a=b)>c)
    {
        printf("apple,");
        if((a=b)>d)
        {
            printf("banana,");
        }
        else{
            printf("cherry,");
        }
    }
    else
    {
    printf("Date,");
    }
}else{
printf("Eggplant,");
}
printf("Feijoa,");
return 0;
}
