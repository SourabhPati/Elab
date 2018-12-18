#include <stdio.h>
int main()
{
	int num;
  	scanf("%d",&num);
  	if(num%4==0 && num%8==0)
      printf("This balloon can fly to miney");
 	else
      printf("This balloon cannot fly to miney");
	return 0;
}