#include <stdio.h>
#include<math.h>
int main()
{
  	int num,sum = 0;
  	scanf("%d",&num);
  	while(num>0)
    {
      sum += pow((num%10),3);
      num/=10;
    }
  	printf("%d",(int)sum);
	return 0;
}