#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int num,arr[num],i, c,d,temp;;
    i=0;
   num=10;
  clock_t startt,endt;
  double totalt;
  
   FILE*fpr;
   for(i=0;i<num;i++)
    {
       scanf("%d",&arr[i]);
    }
    startt=clock();
    for(c=1;c<num;c++)
    {
       d=c;
       while(d>0&& arr[d-1]>arr[d])
       {
          temp=arr[d];
          arr[d]=arr[d-1];
          arr[d-1]=temp;
          d--;
          
        }
     }
     endt=clock();
     totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
     printf("%lf",totalt);
   
 }
       

