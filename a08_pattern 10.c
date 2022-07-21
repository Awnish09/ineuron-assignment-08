#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k=4, c=1;
    //k=j;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=7; j++)
        {
            if(j<=5-i || j>=k)
            {
                printf("%d",c);
                if(c<4 && j<4)
                    c++;
                else
                    c--;
            }
            else
            {
                printf(" ");
                if(c<4 && j<4)
                    c++;
                else
                    c--;
            }
        }
        printf("\n");
        k++;
        c=1;
    }
    getch();
    return 0;
}
