#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k=6;
    //k=j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=10; j++)
        {
            if(j<=6-i || j>=k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        k++;
    }
    getch();
    return 0;
}
