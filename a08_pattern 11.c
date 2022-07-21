#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, i=5;
    char x='A';
    for(b=5; b>=1; b--)
    {
        for(a=1; a<=9; a++)
        {
            if(a>=b && a<=i)
            {
               printf("%c",x);
                if(a<5)
                    x++;

                else
                    x--;
            }

            else
                printf(" ");
        }

        x='A';
        i++;
        printf("\n");
    }
    getch();
    return 0;
}
