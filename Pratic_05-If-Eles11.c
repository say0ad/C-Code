#include<stdio.h>
int main()
{
    int alu,potol;
    printf("Enter the value:");
    scanf("%d",&alu);

    if(alu%4==0 || alu%5==0)
    {

        printf("You should buy ALU\n");
        printf("AJKE SOB SOSTA.");
    }
    else
    {
        printf("APNI GORIB.");
    }


    return 0;
}
