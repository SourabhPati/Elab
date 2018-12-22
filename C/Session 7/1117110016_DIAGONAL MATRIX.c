#include <stdio.h>
int main()
{
  	int l,i,j,temp;
  	scanf("%d",&l);
  	for(i=0;i<l;++i)
      for(j=0;j<l;++j)
      {
        	scanf("%d",&temp);
        	if(i!=j && temp!=0)
            {
              	printf("no");
              	return 0;
            }
      }
  	printf("yes");
	return 0;
}