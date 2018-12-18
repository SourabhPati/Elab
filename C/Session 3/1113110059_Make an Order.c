#include <stdio.h>

void sort(int [],int);
void swap(int [],int,int);
void getArray(int [],int);
void putArray(int [],int);

int main()
{
  	int len,ar[1000];
  	scanf("%d",&len);
  	getArray(ar,len);
  	sort(ar,len);
  	putArray(ar,len);
	return 0;
}

void sort(int ar[],int len)
{
	int i,j,k;
	for(i=0;i<len-1;++i)
	    for(j=1;j<len-i;++j)
		    if(ar[j]<ar[j-1])
			    swap(ar,j,j-1);
}

void swap(int ar[],int i,int j)
{
	int temp;
	temp = ar[i];
	ar[i] = ar[j];
	ar[j] = temp;
}

void getArray(int ar[],int len)
{
	int i;
	for(i=0;i<len;++i)
		scanf("%d",&ar[i]);	
}

void putArray(int ar[],int len)
{
	int i;
	for(i=0;i<len;++i)
		printf("%d\n",ar[i]);	
}