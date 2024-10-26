#include<stdio.h>
int main()
{
    char ch;
           printf("Enter The Alphabets:\n");
           scanf("%c",&ch);

    if (ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
        {
           printf("VAULE.\n");
           printf("Not CONSUNENT.");
        }
    else
        {
            printf("CONSUNENT\n");
            printf("NOT VAULE.");
        }
    return 0;
}
