#include <stdio.h>
int main()
{
  	int beg = 2,n,i,diff=3;
  	scanf("%d",&n);
  	printf("%d ",beg);
  	for(i=0;i<n-1;++i)
    {
      printf("%d ",beg + diff);
      beg = beg+diff;
      diff += 2;
    }
	return 0;
}