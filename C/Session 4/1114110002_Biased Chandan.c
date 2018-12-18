#include <stdio.h>
int getArrayAndSum(int [],int);

int main()
{
	int len,ar[1000],res;
	scanf("%d",&len);
  	res = getArrayAndSum(ar,len);
  	printf("%d",res);
	return 0;
}
int getArrayAndSum(int ar[],int len)
{
	int i,sum = 0;
	for(i=0;i<len;++i)
    {
      scanf("%d",&ar[i]);
      if(i==0) continue;
      if(ar[i]!=0)
        sum += ar[i-1];
    }
  	sum += ar[len-1];
  	return sum; 
}