#include <stdio.h>
int main()
{
  	float N,p,X;
	scanf("%f%f",&N,&p);
  	X = 100*N/(p+100);
  	printf("%.2f",X);
	return 0;
}