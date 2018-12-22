#include <stdio.h>

void chkPrime(int num)
{
  	int i,flag=1;
 	for(i=2;i<=num/2;++i)
    {
      	if(num%i==0)
        {
          	flag=0;
          	break;
        }
    }
  	if(flag)
      	printf("%d\n",num);
}

int main()
{
	int a,b,i;
  	scanf("%d%d",&a,&b);
  	for(i=a;i<=b;++i)
      	chkPrime(i);
	return 0;
}