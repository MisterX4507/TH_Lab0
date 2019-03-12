#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  double x[5]={1,2,3,4,5}; double sum1,sum2, dis;
  int i;
  sum1=0; sum2=0;
  for (i=0; i<(sizeof(x)/sizeof(double)); i++)
  {
    sum1=sum1+pow(x[i],2);
    sum2=sum2+x[i];
  }
  sum1=sum1/(sizeof(x)/sizeof(double));
  sum2=sum2/(sizeof(x)/sizeof(double));
  dis=sum1-pow(sum2,2);
  double aver=sqrt(dis);
  printf("%.2f Dispersion\n", dis);
  printf("%.2f Average deviation\n", aver);
  return EXIT_SUCCESS;
}
