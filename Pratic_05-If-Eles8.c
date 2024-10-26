#include<stdio.h>
int main()
{
    int y;
    printf("Enter The value:");
    scanf("%d",&y);

    if (y%3==0 || y%5==0)
    {
        printf("The number is BIVAZZ by 3 or 5.\n");
    }
    else
    {
        printf("The number is not BIVAZZ by 3 or 5.");
    }
    return 0;
}
