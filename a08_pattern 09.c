#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, i=7, c=1;
    for(b=4; b>=1; b--)
    {
        for(a=1; a<=7; a++)
        {
            if(a>=5-b && a<=i)
            {
               printf("%d",c);
                if(a<4)
                    c++;

                else
                    c--;
            }

            else
                printf(" ");
        }

        c=1;
        i--;
        printf("\n");
    }
    getch();
    return 0;
}
