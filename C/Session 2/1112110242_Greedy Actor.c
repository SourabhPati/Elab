#include <stdio.h>
int main()
{
  	int t,max,N,K,i;
  	scanf("%d",&t);
  	while(t--)
    {
      max = -1;
      scanf("%d%d",&N,&K);
      for(i=1;i<=K;++i)
      	if(N%i>max)
        	max = N%i;
      printf("%d\n",max);
    }

	return 0;
}