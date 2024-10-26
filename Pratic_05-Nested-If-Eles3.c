#include<stdio.h>
int main()
{
    int a;
    printf("Enter the age:");
    scanf("%d",&a);

    if(a<2)
    {
        printf("Inffant");
    }
    else if(a<12)
    {
        printf("Child");
    }
    else if(a<20)
    {
        printf("Teenage");
    }
    else if(a<30)
    {
        printf("Adult");
    }
    else
    {
        printf("OLD");
    }
    return 0;
}
