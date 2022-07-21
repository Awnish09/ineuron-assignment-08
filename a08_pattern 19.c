#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k=10;
    for(i=1; i<=13; i++)
    {
        if(i<4)
        {
            for(j=1; j<=19; j++)
            {
                if(j>=4-i && j<=k-3 || j>=14-i && j<=k+7)
                    printf("*");
                else
                    printf(" ");
            }

            printf("\n");
            k++;
        }
        else if(i==4)
        {
            for(j=1; j<=19; j++)
            {
                if(j<=i+2)
                    printf("*");
                else if(j==7)
                    printf("MySirG");
                else if(j>=8 && j<=14)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");

        }
        else
        {
            for(j=1; j<=19; j++)
            {
                if(j>=i-3 && j<=k+5)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
            k--;
        }
    }
    getch();
    return 0;
}
