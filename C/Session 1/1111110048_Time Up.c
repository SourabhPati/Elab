#include <stdio.h>
int main()
{
  	int num;
  	int h,m,s;
  	scanf("%d",&num);
  	h = num / 3600;
  	m = (num%3600)/60;
  	s = (num%60);
  	printf("%d %d %d",h,m,s);

	return 0;
}