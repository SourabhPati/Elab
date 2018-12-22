#include <stdio.h>

int isPrime(int num)
{
  	int i;
  	for(i=2;i<=num/2;++i)
    {
      	if(num%i==0)
          	return 0;
    }
  	return 1;
}

int main()
{
	int len,temp,i;
  	scanf("%d",&len);
  	for(i=0;i<len;++i)
    {
      	scanf("%d",&temp);
      	if(isPrime(temp))
      		printf("%d is a prime number\n",temp);
      	else
          	printf("%d is a composite number\n",temp);
    }
	return 0;
}