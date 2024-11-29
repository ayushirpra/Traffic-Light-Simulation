#include<stdio.h>
#include<unistd.h>

int main()
{
    int i;

    while(1)
    {
        printf(":::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
        printf("*TRAFFIC LIGHT SIMULATION*\n\n");
        printf(":::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

        printf("Red Light    : ON\n");
        printf("Yellow Light : OFF\n");
        printf("Green LIght  : OFF\n\n");
        printf("*STOP!*\n\n");
        printf("countdown starts!\n\n");
    printf("===================================================\n\n");
        for(i=10;i>=0;i--)
        {
            printf("%d seconds left...\n",i);
            sleep(1);
        }
    printf("\n\n***************************************************\n\n");
        printf("Red Light    : OFF\n");
        printf("Yellow Light : ON\n");
        printf("Green LIght  : OFF\n\n");
        printf("*GET READY!*\n\n");
        printf("countdown starts!\n\n");
    printf("===================================================\n\n");
        for(i=3;i>=0;i--)
        {
            printf("%d seconds left...\n",i);
            sleep(1);
        }
    printf("\n\n***************************************************\n\n");
        printf("Red Light    : OFF\n");
        printf("Yellow Light : OFF\n");
        printf("Green LIght  : ON\n\n");
        printf("*GO!*\n\n");
        printf("countdown starts!\n\n");
    printf("===================================================\n\n");
        for(i=5;i>=0;i--)
        {
            printf("%d seconds left...\n",i);
            sleep(1);
        }
        printf("\n");
    }

    return 0;
}
