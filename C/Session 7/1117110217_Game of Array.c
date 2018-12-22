#include <stdio.h>
int main()
{
	int temp,max=-1,min=9999,len;
  	scanf("%d",&len);
  	while(len--)
    {
      	scanf("%d",&temp);
      	if(temp<min)
          	min = temp;
      	if(temp>max)
          	max = temp;
    }
  	printf("%d",max-min);
	return 0;
}