#include <stdio.h>
int main()
{
  	int MC[12] = {0,3,3,6,1,4,6,2,5,0,3,5};
  	char *p[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int CC[7] = {4,2,0,6,4,2,0};
    int d,m,y;
    scanf("%d%d%d",&d,&m,&y);
    int YC = ((y%100) + ((y%100)/4)) % 7;
    int dayC = (YC + MC[m-1] + CC[(y-1700)/100] + d) % 7;
    printf("%s",p[dayC]);
	return 0;
}