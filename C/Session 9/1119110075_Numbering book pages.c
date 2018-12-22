#include <stdio.h>
int main()
{
	int num;
  	scanf("%d",&num);
  	if((num-9)%2 == 0)
      	printf("%d",(num-9)/2 + 9);
  	else
      	printf("Impossible");
	return 0;
}