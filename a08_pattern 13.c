#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k=7;
    char c=65;

    for(i=1; i<=7; i++)
    {
        for(j=1; j<=13; j++)
        {
            if(j<=8-i || j>=k)
            {
                printf("%c",c);
                if(c<'G' && j<7)
                    c++;
                else
                    c--;
            }
            else
            {
                printf(" ");
                if(c<'G' && j<7)
                    c++;
                else
                    c--;
            }
        }
        printf("\n");
        k++;
        c='A';
    }
    getch();
    return 0;
}
