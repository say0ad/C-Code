#include<stdio.h>
int main()

{
    int number,sum = 0;
    for (number=30;number<=120;number++)
    {
       if(number % 3 == 0 && number % 5 == 0)
       {
           sum = sum + number;
       }
       printf("summation: %d\n",sum);
    }
    return 0;
}

