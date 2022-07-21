#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k=9;
    //k=j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=9; j++)
        {
            if(j>=i && j<=k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        k--;
    }
    getch();
    return 0;
}
