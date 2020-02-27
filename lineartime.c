#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 100000
int search(int a[max],int n,int key)
{
  int i;
  for(i=0;i<n;i++)
  {
     if(a[max]==key)
      { return i;
       }
   }
   return -1;
}
void main()
{
  int i,arr[max],val;
  clock_t startt,endt;
  double totalt;
  int limit=100000;
  for(i=0;i<max-1;i++)
    scanf("%d",&arr[i]);
  startt=clock();
  val=search(arr,max,arr[limit]);
  if(val==-1)
    printf("element not found");
  else
     printf("element found at index %d",val);
  endt=clock();
  totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
  printf("%lf",totalt) ;
}
       
