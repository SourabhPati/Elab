#include <stdio.h>
int main()
{
  	int len,i,temp;
  	scanf("%d",&len);
  	for(i=0;i<len;++i)
    {
      scanf("%d",&temp);
      if(i%2==0)
        printf("%d ",temp);
    }
	return 0;
}