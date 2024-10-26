#include<stdio.h>
int main()
{
    int x;
    printf("Enter The Value:");
    scanf("%d",&x);
    if(x>10 || x<100)
    {
        printf("The number is Cool.\n");
        printf("OK...?");
    }
    return 0;
}
