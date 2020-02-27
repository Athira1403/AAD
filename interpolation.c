#include<stdio.h>
#include<time.h>
#define max 10
int interpolation(int arr[],int n,int x)
{
  int start,end;
  start=0;
  end=n-1;
  while(start<end && x>=arr[start] && x<=arr[end])
  {
     int pos=start+(((double)(end-start)/(arr[end]-arr[start]))*(x-arr[start]));
     if(arr[pos]==x)
         return pos;
     if(arr[pos]<x)
          start=pos+1;
     else
          end=pos-1;
  }
  return -1;
}
int main()
{   int ar[1000];
   clock_t startt,endt;
   double totalt;
   for(int i=0;i<max;i++)
    scanf("%d",&ar[i]);
     startt=clock();
    int index=5;
     interpolation(ar,max,ar[index]);
    if(index!=-1)
       printf("element found at index      %d\n\n\n",index);
    else
       printf("element not found");
   endt=clock();
  totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
  printf("%lf",totalt) ;
  return 0;
}

