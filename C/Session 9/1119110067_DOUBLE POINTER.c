#include <stdio.h>
int main()
{
	int num,*p,**q;
  	scanf("%d",&num);
  	p = &num;
  	q = &p;
  	printf("%d",**q);
	return 0;
}