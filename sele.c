#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUMELE 100000
void main(){

	int a[NUMELE],temp;
	clock_t startt,endt;
	double totalt;
	int i=0;
	int j=0;
	int min,t;

	FILE *fpr;
	for(i=0;i<NUMELE;i++){
 		scanf("%d", &a[i]);
	}
	startt=clock();

	for(i=0;i<NUMELE-1;i++){
		min=i;
		for(j=i+1;j<NUMELE;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
}
	
fpr=fopen("selasc.txt","w");
	for(i=0;i<NUMELE;i++)
 		fprintf(fpr,"%d\n",a[i]);
 	fclose(fpr);
 	endt=clock();
	totalt=(double)(endt-startt)/CLOCKS_PER_SEC;
	printf("%lf\n",totalt);
}



