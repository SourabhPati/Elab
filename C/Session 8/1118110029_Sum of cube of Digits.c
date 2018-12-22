#include <stdio.h>
union number
{
  	int n;
}num;
int main()
{
	int sum=0;
  	scanf("%d",&num.n);
  	while(num.n>0)
    {
      	sum += num.n%10;
      	num.n/=10;
    }
  	printf("Sum=%d\nCube=%d",sum,sum*sum*sum);
	return 0;
}