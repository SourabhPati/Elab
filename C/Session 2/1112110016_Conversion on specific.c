#include <stdio.h>
int main()
{
  	int days,y,w;
  	scanf("%d",&days);
  	y = days/365;
  	days %= 365;
  	w = days/7;
  	days %= 7;

  	printf("Years:%d\nWeeks:%d\nDays:%d",y,w,days);
  
	return 0;
}