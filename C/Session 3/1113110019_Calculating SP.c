#include <stdio.h>
int main()
{
  	int cp,lp,sp;
  	scanf("%d%d",&cp,&lp);
  	sp = cp - ((cp*0.01)*lp);
  	printf("The selling price of the cycle is Rs=%.2f",(float)sp);
	return 0;
}