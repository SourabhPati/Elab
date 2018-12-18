#include <stdio.h>
int main()
{
	int n,i,a=2,b=1;
	scanf("%d",&n);
	for(i=1;a+b<=n;i++)
    {
     	a+=b;
     	b=a-b;
    }
	printf("%d",i);

	return 0;
}