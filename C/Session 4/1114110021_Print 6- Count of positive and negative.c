#include <stdio.h>
void getArrayAndCount(int [],int,int *,int *);
int main()
{
	int len,ar[1000],pos = 0,neg = 0;
	scanf("%d",&len);
  	getArrayAndCount(ar,len,&pos,&neg);
	printf("positive numbers count=%d\n",pos);
    printf("negative number count=%d",neg);
	return 0;
}
void getArrayAndCount(int ar[],int len,int *p,int *q)
{
	int i;
	for(i=0;i<len;++i)
    {
      scanf("%d",&ar[i]);
      if(ar[i]>0)
        (*p)++;
      else
        (*q)++;
    }
}