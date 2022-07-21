#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k=5;
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=9; j++)
        {
            if(j>=i && j<=k)
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
