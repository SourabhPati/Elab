#include <stdio.h>
void getArray(int [],int);
void putReverseArray(int [],int);
int main()
{
  	int len,ar[1000];
	scanf("%d",&len);
  	getArray(ar,len);
  	putReverseArray(ar,len);
	return 0;
}
void getArray(int ar[],int len)
{
	int i;
	for(i=0;i<len;++i)
		scanf("%d",&ar[i]);	
}
void putReverseArray(int ar[],int len)
{
	int i;
	for(i=len-1;i>=0;--i)
		printf("%d ",ar[i]);	
}