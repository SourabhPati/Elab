#include <stdio.h>
int main()
{
	int me;
  	float you,average;
  	scanf("%d%f",&me,&you);
  	average = (me+you)/2;
  	printf("I am %d\nYou are %d\nWe are around %.2f",me,(int)you,average);
	return 0;
}