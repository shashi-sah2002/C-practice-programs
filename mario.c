#include<stdio.h>
int main (void)
{

    int h;
    do
    {
        printf("height:");
        scanf("%d",&h);

     }
     while (h<1 || h>8);

     for (int i=0;i<h;i++)
     {
         for (int j=0;j<h;j++)
         {
             if (i+j<h-1)
                printf(" ");
            else
                printf("#");

         }
         printf("\n");

     }

}
