#include <stdio.h>

int factorial(int num)
{
  	int fact=1;
  	if(num==1)
      	return fact;
  	return num*factorial(num-1);
}
int main()
{
	int n,r,nCr;
  	scanf("%d%d",&n,&r);
  	nCr = factorial(n)/(factorial(r)*factorial(n-r));
  	printf("%d",nCr);
	return 0;
}