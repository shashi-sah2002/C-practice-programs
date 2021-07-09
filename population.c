#include<stdio.h>
int main(void)
{
  int start_size;
  do{
      printf("start_size:");
      scanf("%i",&start_size);

  }
  while (start_size<9);

  int end_size;
  do{
        printf("end_size:");
        scanf("%i",&end_size);
  }
  while(end_size<start_size);

  int years=0;
  while(start_size<end_size)
  {
      start_size=start_size+(start_size/3) -(start_size/4);
      years++;
  }
  printf("Years: %i",years);
}
