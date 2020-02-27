#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
  int n,num;
  num=100;
  int i=0;
  clock_t startt,endt;
  double totalt;
  int j=0; 
  int t;
  int isSwapped=0;
  int a[num];
  FILE*fpr;
  for(i=0;i<num;i++)
  scanf("%d",&a[i]);
  startt=clock();
  for(i=0;i<num-1;i++)
  {
    for(j=0;j<num-1;j++)
    {
      if(a[j]>a[j+1])
      {
         t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;
         isSwapped=1;
       }
     }
     if (isSwapped==0)
       break;
    }
     endt=clock();
     totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
     printf("%lf",totalt);
  }

