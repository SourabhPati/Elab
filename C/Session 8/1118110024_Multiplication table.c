#include <stdio.h>

struct table
{
  	int N;
}num;

int main()
{
	int i;
  	scanf("%d",&num.N);
  	for(i=1;i<=5;++i)
    {
      	printf("%d*%d=%d\n",i,num.N,num.N*i);
    }
	return 0;
}