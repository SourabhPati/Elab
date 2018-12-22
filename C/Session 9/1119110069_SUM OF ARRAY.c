#include <stdio.h>
int main()
{
	int t;
  	scanf("%d",&t);
  	if(t<0 || t >1000)
    {
      	printf("INVALID INPUT");
      	return 0;
    }
  	while(t--)
    {
      	int len,*p,ar[1000],i,sum=0;
      	scanf("%d",&len);
      	for(i=0;i<len;++i)
          	scanf("%d",&ar[i]);
      	p = ar;
      	for(i=0;i<len;++i,++p)
          	sum += *p;
      	printf("%d\n",sum);
    }
	return 0;
}