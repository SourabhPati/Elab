#include <stdio.h>
#include<math.h>
int main()
{
	int l,md=0,sd=0,i,j,mat[15][15];
  	scanf("%d",&l);
  	for(i=0;i<l;i++)
      for(j=0;j<l;++j)
      {
        	scanf("%d",&mat[i][j]);
        	if(i==j)
              	md += mat[i][j];
        	if(i+j == l-1)
              	sd += mat[i][j];
      }
  	printf("%d",abs(md-sd));
	return 0;
}