#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k=5;
    for(i=1; i<=9; i++)
    {
        if(i<=5)
        {
            for(j=1; j<=9; j++)
            {
                if(j>=6-i && j<=k)
                    printf("*");
                else
                    printf(" ");
            }

            printf("\n");
            k++;
        }
        else
        {
            for(j=1; j<=9; j++)
            {
                if(j>=i-4 && j<=k-2)
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
