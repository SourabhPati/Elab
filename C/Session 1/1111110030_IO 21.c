#include <stdio.h>
#include<math.h>
int main()
{
  	float num;
  	scanf("%f",&num);
  	printf("The integer variant of %.2f is=%d",num,(int)round(num));
	return 0;
}