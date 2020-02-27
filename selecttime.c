#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int num,a[num],i,c,pos,b,swap;
    num=1000;
    i=0;
     c=0;
    clock_t startt,endt;
    double totalt;
    int isSwapped=0;
    FILE*fpr;
    
    for(i=0;i<num;i++)
    {
       scanf("%d",&a[i]);
    }
    startt=clock();
    for(c=0;c<num;c++)
  {
     pos=c;
     for(b=c+1;b<num;b++)
     {
       if (a[pos]>a[b])
       {
        pos=b;
       }
     }
    if(pos!=c)
    { swap =a[c];
      a[c]= a[pos];
      a[pos]=swap;
      isSwapped=1;
    }
    if (isSwapped==0)
       break;
  }
     endt=clock();
     totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
     printf("%lf",totalt);
   
 }
       

