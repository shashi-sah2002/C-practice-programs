#include<stdio.h>
#include<math.h>
int main(void)
{
    float dollars;
    do
    {
        printf("Dollars:");
        scanf("%f",&dollars);
    }
    while(dollars<0);

    int coins=0;
    int cents=round( dollars*100);
    while(cents>=25)
    {
        cents=cents-25;
        coins++;
    }
    while(cents>=10)
    {
        cents=cents-10;
        coins++;
    }
    while(cents>=5)
    {
        cents=cents-5;
        coins++;
    }
    while(cents>=1)
    {
        cents=cents-1;
        coins++;
    }
    printf("%i",coins);
}
