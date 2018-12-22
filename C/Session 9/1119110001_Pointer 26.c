#include <stdio.h>
int main()
{
	int len1,len2,ar[1000],temp,i;
  	scanf("%d",&len1);
  	for(i=0;i<len1;++i)
      	scanf("%d",&ar[i]);
  	scanf("%d",&len2);
  	if(len1 != len2)
    {
      	printf("Arrays are not equal");
      	return 0;
    }
  	for(i=0;i<len2;++i)
    {
      	scanf("%d",&temp);
      	if(ar[i] != temp)
        {
          	printf("Arrays are not equal");
      		return 0;
        }
    }
  	printf("Arrays are equal");
	return 0;
}