#include<stdio.h>
int main()

{
    int number,numberr,numberrr;
    printf("Enter your 1st value:\n");
    scanf("%d",&number);
    printf("Enter the 2nd value:\n");
    scanf("%d",&numberr);
    numberrr=number*numberr;
    printf("The multipiction is:%d\n",numberrr);
    numberrr=number+numberr;
    printf("The addition is:%d\n",numberrr);
    numberrr=number-numberr;
    printf("The sub is:%d",numberrr);
    return 0;

}
