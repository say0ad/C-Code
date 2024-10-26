#include<stdio.h>
#include<math.h>
int main()

{
    float radius,area,PI;
    PI=3.1416;
    printf("Enter the value of Radius:\n");
    scanf("%f",&radius);

    area= PI*(radius*radius);

    printf("The area is:%f",area);

    return 0;
}
