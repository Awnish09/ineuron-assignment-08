#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j==i || j==1 || i==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
