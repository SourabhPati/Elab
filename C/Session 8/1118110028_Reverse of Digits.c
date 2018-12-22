#include <stdio.h>

union reverse
{
  	int num;
}R;

int main()
{
  	scanf("%d",&R.num);
  	while(R.num>0)
    {
      	printf("%d",R.num%10);
      	R.num/=10;
    }
	return 0;
}