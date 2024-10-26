#include<stdio.h>
main()

{
   int  aa,week,month,day;
    printf("Enter the number of day:");
    scanf("%d",&day);

    month =day/ 30;



    day=day%30;

    printf("Month is=%d \nDay=%d",month,day);

    return 0;

}
