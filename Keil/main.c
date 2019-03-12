/*******************************************************************************
*
* Copyright (C) 2019 MITUS Koryshev Nikolay
*
* File              : main.c
* Compiler          : Armcc.exe V5.06 update 6
* Version           : 5.27
* Created File      : 11.03.2019
* Last modified     : 11.03.2019
*
* Support mail      : koryshev1997@gmail.com
*
* Target MCU        : MCU: Milandr MDR1986BE9x
* Description       : Calculating the variance and standard deviation
*                   : of an static array

* Hardware          : .sch .pcb
*
********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
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
  return 0;
}
