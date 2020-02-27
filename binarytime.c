#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 100000
int search(int arr[max],int f,int l,int key)
{
   int mid=0;
   while(f<=l)
   {
      mid=(f+l)/2;
      if(key==arr[mid])
          return mid;
      if(key>arr[mid])
           f=mid+1;
      else
           l=mid+1;
   }}
void main()
{
  int num,i,ar[max],val;
  clock_t startt,endt;
  double totalt;
  int lim=1000;
  for(i=0;i<max-1;i++)
    scanf("%d",&ar[i]);
  startt=clock();
  val=search(ar,0,max-1,ar[lim/2]);
  if(val==-1)
    printf("element not found");
  else
     printf("element found at index");
  endt=clock();
  totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
  printf("%lf",totalt) ;
}
       


