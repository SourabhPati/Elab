#include <stdio.h>

struct num
{
  	int n;
};

int main()
{
	struct num N;
  	scanf("%d",&N.n);
  	printf("%d",N.n*5);
	return 0;
}