#include<stdio.h>
int main()

{
    int AS[4];

    AS[0]=10;
    AS[1]=11;
    AS[2]=12;
    AS[3]=13;

    int sum;

    sum=AS[0]+AS[1]+AS[2]+AS[3];
    printf("%d\n",sum);

    AS[2]=100,AS[1]=200;
    sum=AS[0]+AS[1]+AS[2]+AS[3];
    printf("%d",sum);

    return 0;
}
